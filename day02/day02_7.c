#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 

//=================================
//������ ���� 
const int BABY_PRICE = 0;

const int ADULT_DAY_PRICE = 56000;
const int ADULT_NIGHT_PRICE = 46000;

const int TEEN_DAY_PRICE = 47000;
const int TEEN_NIGHT_PRICE = 40000;

const int CHILD_DAY_PRICE = 44000;
const int CHILD_NIGHT_PRICE = 37000;

const int OLD_DAY_PRICE = 44000;
const int OLD_NIGHT_PRICE = 37000;

//=================================
//�ֹε�Ϲ�ȣ �м�
const long long int FULL_DIGIT = 10000000000000,
const long long int	FULL_DIGIT_MIN = 10000000000, 
const long long int	SEVEN_DIGIT = 1000000;

const int TWO_DIGIT = 100, ONE_DIGIT = 10;
const int OLD_GENERATION = 1900, NEW_GENERATION = 2000;
const int MALE_OLD = 1, FEMALE_OLD = 2; 
const int MALE_NEW = 3, FEMALE_NEW = 4;
const int BEFORE_BIRTH = 2, AFTER_BIRTH = 1;
 
//=================================
//���̿� ���� ����
const int MIN_BABY = 1;
 
const int MIN_CHILD = 3; 
const int MIN_TEEN = 13; 
const int MIN_ADULT = 19;
 
const int MAX_CHILD = 12; 
const int MAX_TEEN = 18; 
const int MAX_ADULT = 64;
 
//=================================
//���̿� ���� �׷�
const int BABY = 1, CHILD = 2, TEEN = 3, ADULT = 4, OLD = 5;

//=================================
//������
const float DISABLE_DISCOUNT_RATE = 0.6;
const float MERIT_DISCOUNT_RATE = 0.5;
const float	MULTICHILD_DISCOUNT_RATE = 0.8;
const float PREGNANT_DISCOUNT_RATE = 0.85;

//=================================
//�ִ��ֹ���
const int MAX_COUNT = 10, MIN_COUNT = 1;
 
//======================================================================================================
//�⺻ �Լ� ���� 

void errorMessagePrint(); //���� �޼��� ��� 

int inputTicketSelect(); //

long long int inputCustomerIDNumber();

int inputOrderCount();

int inputDiscountSelect();

void inputData(int* ticketSelect, long long int* customerIDNumber,int* orderCount, int* discountSelect);

int calcAge(long long int customerIDNumber);

int calcAgeGroup(int age);

int calcPriceProcess(int age, int ticketSelect);

int calcDiscount(int calcPrice, int discountSelect);

int calcPriceResult(int calcPrice, int orderCount);

int processIntergration(long long int customerIDNumber, int ticketSelect, int discountSelect, int orderCount, int priceResult, int *age);

void saveOrderList(int ticketSelect, int age, int orderCount, int priceResult, int discountSelect, int *position, int(*orderList)[5]);

void pricePrint(int priceResult);

void orderPrint(int totalPrice, int* position, int(*orderList)[5]);

void orderFilePrint(int totalPrice, int* position, int(*orderList)[5], int* filePosition);

int orderContinue();


//======================================================================================================  
//�ְ��� �߰��� ���� 
int isDayOrNight() {	
	int k = 0;
	int morningNight;	
	while(k < 2) {
	printf("������ �����ϼ���.\n");
	printf("1. �ְ���\n");
	printf("2. �߰���\n");
	
	scanf("%d",&morningNight);
	
	if(morningNight == 1) {
		printf("�ְ����� �����ϼ̽��ϴ�.\n");
		break;
	}else if(morningNight == 2) {
		printf("�߰����� �����ϼ̽��ϴ�.\n");
		return 2;
		break;
	}else {
		printf("1~2���� �������ּ���.\n");
	}
	}	
	return morningNight;
}

//������ ��� 
int myAge() {
	struct tm * t;
    time_t base = time(NULL);
    t = localtime(&base);
    int nowYear = t->tm_year + 1900;
    int nowMonth = t->tm_mon + 1;
    int nowDay = t->tm_mday;
 	char me[13];
	int i;
	int year, age;
	
	printf("�ֹι�ȣ�� �Է��ϼ���.\n");
	
	for (i = 0; i < 6; i++) {
		me[i] = getche();   
	}
    printf("-");
 	for (; i < 13; i++) {
  		me[i] = getch();        
  		printf("*");
 	}
	me[13] = getchar();
	printf("\n");  
   
   if(me[6] == '1' || me[6] == '2') {
   		year = 1900 + ((me[0] - 48)*10 +(me[1]-48));
   }else {
   		year = 2000 + ((me[0] - 48)*10 +(me[1]-48));
   }
   
   int myMonth = (me[2]-48) + (me[3]-48);
   int myDay =  (me[4]-48) + (me[5]-48);
   
   if(myMonth <= nowMonth && myDay <= nowDay) {
   		age = nowYear - year;
   }else {
   		age = nowYear - year + 1;
   }  
   return age;
}

//������ Ƽ��  ����
int howManyTickets() {
	int k = 0;
	int buyHowManyTicket;
	while(k < 2) {
		printf("Ƽ���� � �ֹ��Ͻðڽ��ϱ�?\n");
		printf("�ִ� 10�� ���� ���� �����մϴ�.\n");
		scanf("%d",&buyHowManyTicket);
		if(buyHowManyTicket > 10) {
			continue;
		}
		break; 
	}
	return buyHowManyTicket;
}

//�ֹι�ȣ �������� , �ְ� �߰�, ������ Ƽ���� X �ؼ� �� �ݾ� ���ϱ�
int whatsTotalPrice(int morningNight, int age , int buyHowManyTicket) {
	
	//�ְ��� ���� 
    int dayAdultPrice = 56000;
    int dayMiddlePrice = 47000;
    int daySmallPrice = 44000;
    int dayOldPrice = 44000;
    //�߰��� ���� 
    int nightAdultPrice = 46000;
    int nightMiddlePrice = 40000;
    int nightSmallPrice = 37000;
    int nightOldPrice = 37000;
 
    int totalPrice; 
	
	if(morningNight == 1) {
		if(age >= 19 && age <= 64) {
		totalPrice = dayAdultPrice * buyHowManyTicket;
		}else if(age >= 13 && age <= 18) {
		totalPrice = dayMiddlePrice * buyHowManyTicket;
		}else if(age >= 3 && age <= 12) {
		totalPrice = daySmallPrice * buyHowManyTicket;
		}else if(age >= 65) {
		totalPrice = dayOldPrice * buyHowManyTicket;
		}
	}
	if(morningNight == 2) {
		if(age >= 19 && age <= 64) {
		totalPrice = nightAdultPrice * buyHowManyTicket;
		}else if(age >= 13 && age <= 18) {
		totalPrice = nightMiddlePrice * buyHowManyTicket;
		}else if(age >= 3 && age <= 12) {
		totalPrice = nightSmallPrice * buyHowManyTicket;
		}else if(age >= 65) {
		totalPrice = nightOldPrice * buyHowManyTicket;
		}
	}
	return totalPrice;
}

//�����ں� ���� 
float forSale() {
	
	int forWeekPerson;
	float sale;
	
	float bodyGood = 1.0;
	float bodySick = 0.4;
	float saveCountry = 0.5;
	float Manybaby = 0.2;
	float pregnent = 0.15;
	
	int k = 0;
	while(k < 2) {
		
		printf("�������� ������ �ּ���.\n");
		printf("1. ���� \n");
		printf("2. �����\n");
		printf("3. ����������\n");
		printf("4. ���ڳ�\n");
		printf("5. �ӻ��\n");
		
		scanf("%d",&forWeekPerson);
		
		if(forWeekPerson == 1) {
			printf("1�� �����ϼ̽��ϴ�.\n");
			sale = bodyGood;
			break;
		}else if(forWeekPerson == 2) {
			printf("2�� �����ϼ̽��ϴ�.\n");
			sale = bodySick;
			break;
		}else if(forWeekPerson == 3) {
			printf("3�� �����ϼ̽��ϴ�.\n");
			sale = saveCountry;
			break;
		}else if(forWeekPerson == 4) {
			printf("4�� �����ϼ̽��ϴ�.\n");
			sale = Manybaby;
			break;
		}else if(forWeekPerson == 5) {
			printf("5�� �����ϼ̽��ϴ�.\n");
			sale = pregnent;
			break;
		}else {
			printf("1~5���� �������ּ���.\n");
		}
	}
	return sale;
}

int main() {
	
    char* DayNightTicket[100];
    char* Person[100];
    int Tickets[100];
    int Money[100];
    char* GiveHandi[100];
    
//    ===================

    int dayOrNightCnt = 0;
    int ageCnt = 0;
    int TicketsCnt = 0; 
    int MoneyCnt = 0;
    int GiveHandiCnt = 0;
    
    while(1) {
    	
    	printf("��� �߱� �Ͻðڽ��ϱ�?\n");
    	printf("1. Ƽ�Ϲ߱�\n");
    	printf("2. Ƽ������\n");
    	int chooseNum; 
    	scanf("%d",&chooseNum);
    	if(chooseNum == 1) {
		
			int dayOrNight = isDayOrNight(); //�ְ����� �߰����� 
			if(dayOrNight == 1) {
				DayNightTicket[dayOrNightCnt] = "�ְ���";
				dayOrNightCnt++;
			}else if(dayOrNight == 2) {
				DayNightTicket[dayOrNightCnt] = "�߰���";
				dayOrNightCnt++;
			}
//			==========================================================
			int age = myAge(); //���� 
			if(age >= 19 && age <= 64) {
				Person[ageCnt] = "����";
				ageCnt++;
			}else if(age >= 13 && age <= 18) {
				Person[ageCnt] = "û�ҳ�";
				ageCnt++;
			}else if(age >= 3 && age <= 12) {	
				Person[ageCnt] = "����";
				ageCnt++;
			}else if(age >= 65) {
				Person[ageCnt] = "���";
				ageCnt++;
			}
//			==========================================================
			int tickets =  howManyTickets(); //Ƽ�� ���ż�
			Tickets[TicketsCnt] = tickets;
			TicketsCnt++;
//			==========================================================
    		int totalPrice = whatsTotalPrice(dayOrNight,age,tickets);
			Money[MoneyCnt] = totalPrice;
			MoneyCnt++;
//			==========================================================

    		float sale = forSale();
    		printf("Ȯ�� : %f\n",sale);
    		
    		if(sale == 1.0) {
    			GiveHandi[GiveHandiCnt] = "������� ����";
    			GiveHandiCnt++;
			}else if(sale == 0.4f) {
				GiveHandi[GiveHandiCnt] = "����� �������";
    			GiveHandiCnt++;
			}else if(sale == 0.5f) {
				GiveHandi[GiveHandiCnt] = "���� ������ �������";
    			GiveHandiCnt++;
			}else if(sale == 0.2f) {
				GiveHandi[GiveHandiCnt] = "���ڳ� �������";
    			GiveHandiCnt++;
			}else if(sale == 0.15f) {
				GiveHandi[GiveHandiCnt] = "�ӻ�� �������";
    			GiveHandiCnt++;
			}
//			==========================================================
		}else if(chooseNum == 2) {
			
			printf("Ƽ�� �߱��� �����մϴ�. �����մϴ�.\n");
			printf("=======================================================================\n");
			
			int i;
			for(i = 0; i < ageCnt; i++) {
			printf("%s\t%s\tX\t%d\t%d��\t%s\n", DayNightTicket[i],Person[i],Tickets[i],Money[i],GiveHandi[i]);
			}
			int totalPrice = 0; 
			for(i = 0; i < ageCnt; i++) {
				totalPrice += Money[i];
			}
			printf("����� �Ѿ��� %d�� �Դϴ�.\n",totalPrice);
			printf("=======================================================================\n");
			break;
		}else {
			printf("1��~2���� �������ּ���.");
		}
    	
	}
	
	return 0;
	
} 




