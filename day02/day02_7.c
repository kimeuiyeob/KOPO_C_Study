#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 

//=================================
//권종별 가격 
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
//주민등록번호 분석
const long long int FULL_DIGIT = 10000000000000,
const long long int	FULL_DIGIT_MIN = 10000000000, 
const long long int	SEVEN_DIGIT = 1000000;

const int TWO_DIGIT = 100, ONE_DIGIT = 10;
const int OLD_GENERATION = 1900, NEW_GENERATION = 2000;
const int MALE_OLD = 1, FEMALE_OLD = 2; 
const int MALE_NEW = 3, FEMALE_NEW = 4;
const int BEFORE_BIRTH = 2, AFTER_BIRTH = 1;
 
//=================================
//나이에 따른 범위
const int MIN_BABY = 1;
 
const int MIN_CHILD = 3; 
const int MIN_TEEN = 13; 
const int MIN_ADULT = 19;
 
const int MAX_CHILD = 12; 
const int MAX_TEEN = 18; 
const int MAX_ADULT = 64;
 
//=================================
//나이에 따른 그룹
const int BABY = 1, CHILD = 2, TEEN = 3, ADULT = 4, OLD = 5;

//=================================
//할인율
const float DISABLE_DISCOUNT_RATE = 0.6;
const float MERIT_DISCOUNT_RATE = 0.5;
const float	MULTICHILD_DISCOUNT_RATE = 0.8;
const float PREGNANT_DISCOUNT_RATE = 0.85;

//=================================
//최대주문량
const int MAX_COUNT = 10, MIN_COUNT = 1;
 
//======================================================================================================
//기본 함수 정의 

void errorMessagePrint(); //오류 메세지 출력 

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
//주간권 야간권 선택 
int isDayOrNight() {	
	int k = 0;
	int morningNight;	
	while(k < 2) {
	printf("권종을 선택하세요.\n");
	printf("1. 주간권\n");
	printf("2. 야간권\n");
	
	scanf("%d",&morningNight);
	
	if(morningNight == 1) {
		printf("주간권을 선택하셨습니다.\n");
		break;
	}else if(morningNight == 2) {
		printf("야간권을 선택하셨습니다.\n");
		return 2;
		break;
	}else {
		printf("1~2번중 선택해주세요.\n");
	}
	}	
	return morningNight;
}

//만나이 계산 
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
	
	printf("주민번호를 입력하세요.\n");
	
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

//구매한 티켓  개수
int howManyTickets() {
	int k = 0;
	int buyHowManyTicket;
	while(k < 2) {
		printf("티켓을 몇개 주문하시겠습니까?\n");
		printf("최대 10개 까지 구매 가능합니다.\n");
		scanf("%d",&buyHowManyTicket);
		if(buyHowManyTicket > 10) {
			continue;
		}
		break; 
	}
	return buyHowManyTicket;
}

//주민번호 연령으로 , 주간 야간, 구매한 티켓을 X 해서 총 금액 구하기
int whatsTotalPrice(int morningNight, int age , int buyHowManyTicket) {
	
	//주간권 가격 
    int dayAdultPrice = 56000;
    int dayMiddlePrice = 47000;
    int daySmallPrice = 44000;
    int dayOldPrice = 44000;
    //야간권 가격 
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

//구매자별 혜택 
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
		
		printf("우대사항을 선택해 주세요.\n");
		printf("1. 없음 \n");
		printf("2. 장애인\n");
		printf("3. 국가유공자\n");
		printf("4. 다자녀\n");
		printf("5. 임산부\n");
		
		scanf("%d",&forWeekPerson);
		
		if(forWeekPerson == 1) {
			printf("1번 선택하셨습니다.\n");
			sale = bodyGood;
			break;
		}else if(forWeekPerson == 2) {
			printf("2번 선택하셨습니다.\n");
			sale = bodySick;
			break;
		}else if(forWeekPerson == 3) {
			printf("3번 선택하셨습니다.\n");
			sale = saveCountry;
			break;
		}else if(forWeekPerson == 4) {
			printf("4번 선택하셨습니다.\n");
			sale = Manybaby;
			break;
		}else if(forWeekPerson == 5) {
			printf("5번 선택하셨습니다.\n");
			sale = pregnent;
			break;
		}else {
			printf("1~5번중 선택해주세요.\n");
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
    	
    	printf("계속 발권 하시겠습니까?\n");
    	printf("1. 티켓발권\n");
    	printf("2. 티켓종료\n");
    	int chooseNum; 
    	scanf("%d",&chooseNum);
    	if(chooseNum == 1) {
		
			int dayOrNight = isDayOrNight(); //주간인지 야간인지 
			if(dayOrNight == 1) {
				DayNightTicket[dayOrNightCnt] = "주간권";
				dayOrNightCnt++;
			}else if(dayOrNight == 2) {
				DayNightTicket[dayOrNightCnt] = "야간권";
				dayOrNightCnt++;
			}
//			==========================================================
			int age = myAge(); //나이 
			if(age >= 19 && age <= 64) {
				Person[ageCnt] = "대인";
				ageCnt++;
			}else if(age >= 13 && age <= 18) {
				Person[ageCnt] = "청소년";
				ageCnt++;
			}else if(age >= 3 && age <= 12) {	
				Person[ageCnt] = "소인";
				ageCnt++;
			}else if(age >= 65) {
				Person[ageCnt] = "경로";
				ageCnt++;
			}
//			==========================================================
			int tickets =  howManyTickets(); //티켓 구매수
			Tickets[TicketsCnt] = tickets;
			TicketsCnt++;
//			==========================================================
    		int totalPrice = whatsTotalPrice(dayOrNight,age,tickets);
			Money[MoneyCnt] = totalPrice;
			MoneyCnt++;
//			==========================================================

    		float sale = forSale();
    		printf("확인 : %f\n",sale);
    		
    		if(sale == 1.0) {
    			GiveHandi[GiveHandiCnt] = "우대적용 없음";
    			GiveHandiCnt++;
			}else if(sale == 0.4f) {
				GiveHandi[GiveHandiCnt] = "장애인 우대적용";
    			GiveHandiCnt++;
			}else if(sale == 0.5f) {
				GiveHandi[GiveHandiCnt] = "국가 유공자 우대적용";
    			GiveHandiCnt++;
			}else if(sale == 0.2f) {
				GiveHandi[GiveHandiCnt] = "다자녀 우대적용";
    			GiveHandiCnt++;
			}else if(sale == 0.15f) {
				GiveHandi[GiveHandiCnt] = "임산부 우대적용";
    			GiveHandiCnt++;
			}
//			==========================================================
		}else if(chooseNum == 2) {
			
			printf("티켓 발권을 종료합니다. 감사합니다.\n");
			printf("=======================================================================\n");
			
			int i;
			for(i = 0; i < ageCnt; i++) {
			printf("%s\t%s\tX\t%d\t%d원\t%s\n", DayNightTicket[i],Person[i],Tickets[i],Money[i],GiveHandi[i]);
			}
			int totalPrice = 0; 
			for(i = 0; i < ageCnt; i++) {
				totalPrice += Money[i];
			}
			printf("입장료 총액은 %d원 입니다.\n",totalPrice);
			printf("=======================================================================\n");
			break;
		}else {
			printf("1번~2번중 선택해주세요.");
		}
    	
	}
	
	return 0;
	
} 




