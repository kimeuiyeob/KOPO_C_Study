#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 
//======================================================
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
//======================================================
//���̿� ���� ����
const int MIN_BABY = 1;
const int MIN_CHILD = 3; 
const int MIN_TEEN = 13; 
const int MIN_ADULT = 19;
const int MAX_CHILD = 12; 
const int MAX_TEEN = 18; 
const int MAX_ADULT = 64;
//======================================================
//���̿� ���� �׷�
const int BABY = 1, CHILD = 2, TEEN = 3, ADULT = 4, OLD = 5;
//======================================================
//������
const float DISABLE_DISCOUNT_RATE = 0.6;
const float MERIT_DISCOUNT_RATE = 0.5;
const float MULTICHILD_DISCOUNT_RATE = 0.8;
const float PREGNANT_DISCOUNT_RATE = 0.85;
//======================================================
//�ִ��ֹ���
const int MAX_COUNT = 10, MIN_COUNT = 1;
//======================================================
//���� ��� ���� �迭
char* dayOfNightArr[100]; //1:�ְ�, 2:�߰� 
char* AdultOrChildArr[100]; //1:�, 2:û�ҳ�, 3:���, 4:����, 5:�ֱ� 
int tickersArr[100]; //������ Ƽ�ϼ� 
int totalPriceArr[100]; //������ ����ݾ� 
char* benefitArr[100]; //������ 
int count = 0;

//==================================================================================================================================
//���� Ƽ�� �ְ����� �߰����� 
int inputTicketSelect() {
   int morningNight;   
   while(1) {
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
};

//==================================================================================================================================
//������ Ƽ�ϼ� 
int inputOrderCount() {
   int buyHowManyTicket;
   while(1) {
      printf("Ƽ���� � �ֹ��Ͻðڽ��ϱ�?\n");
      printf("�ּ� 1�� , �ִ� 10�� ���� ���� �����մϴ�.\n");
      scanf("%d",&buyHowManyTicket);
      if(buyHowManyTicket > MAX_COUNT && buyHowManyTicket < MIN_COUNT) {
         continue;
      }
      break; 
   }
   return buyHowManyTicket;
};

//==================================================================================================================================
//������ ���� 
int inputDiscountSelect() {
   int forWeekPerson;
   int sale;
   while(1) {
      printf("�������� ������ �ּ���.\n");
      printf("1. ���� \n");
      printf("2. �����\n");
      printf("3. ����������\n");
      printf("4. ���ڳ�\n");
      printf("5. �ӻ��\n");
      scanf("%d",&forWeekPerson);
      
      if(forWeekPerson == 1) {
         printf("1�� �����ϼ̽��ϴ�.\n");
         sale = 1;
         break;
      }else if(forWeekPerson == 2) {
         printf("2�� �����ϼ̽��ϴ�.\n");
         sale = 2;
         break;
      }else if(forWeekPerson == 3) {
         printf("3�� �����ϼ̽��ϴ�.\n");
         sale = 3;
         break;
      }else if(forWeekPerson == 4) {
         printf("4�� �����ϼ̽��ϴ�.\n");
         sale = 4;
         break;
      }else if(forWeekPerson == 5) {
         printf("5�� �����ϼ̽��ϴ�.\n");
         sale = 5;
         break;
      }else {
         printf("1~5���� �������ּ���.\n");
      }
   }
   return sale;
};

//==================================================================================================================================
//������ ��� 
int calcAge() {
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
};

//==================================================================================================================================
//���̷� �,û�ҳ� ���� ����
int numberAdultOrChild(int age) {
	int number;
	if(age >= MIN_ADULT && age <= MAX_ADULT) {
        number = 1;
    }else if(age >= MIN_TEEN && age <= MAX_TEEN) {
        number = 2;
    }else if(age >= MIN_CHILD && age <= MAX_CHILD) {
        number = 3;
	}else if(age >= MAX_ADULT) {
        number = 4;
    }else if(age == MIN_BABY) {
        number = 5;
    }
	return number;	
};

//==================================================================================================================================
//���ɿ� ���� Ƽ�� ���� �Լ� 
int calcPriceProcess(int age, int ticketSelect) {
   int calcPrice;
   if(ticketSelect == 1) {
      if(age >= MIN_ADULT && age <= MAX_ADULT) {
         calcPrice = ADULT_DAY_PRICE;
      }else if(age >= MIN_TEEN && age <= MAX_TEEN) {
         calcPrice = TEEN_DAY_PRICE;
      }else if(age >= MIN_CHILD && age <= MAX_CHILD) {
         calcPrice = CHILD_DAY_PRICE;
      }else if(age >= MAX_ADULT) {
         calcPrice = OLD_DAY_PRICE;
      }else if(age == MIN_BABY) {
         calcPrice = 0;
      }
   }
   if(ticketSelect == 2) {
      if(age >= MIN_ADULT && age <=  MAX_ADULT) {
         calcPrice = ADULT_NIGHT_PRICE;
      }else if(age >= MIN_TEEN && age <= MAX_TEEN) {
         calcPrice = TEEN_NIGHT_PRICE;
      }else if(age >= MIN_CHILD && age <= MAX_CHILD) {
         calcPrice = CHILD_NIGHT_PRICE;
      }else if(age >= MAX_ADULT) {
         calcPrice = OLD_NIGHT_PRICE;
      }else if(age == MIN_BABY) {
         calcPrice = 0;
      }
   }
   return calcPrice;
};

//==================================================================================================================================
//������ �������� ������ ��� 
int calcDiscount(int calcPrice, int discountSelect) {
   float discountPrice;
   if(discountSelect == 1) {
   discountPrice =   calcPrice;
   }else if(discountSelect == 2) {
   discountPrice = calcPrice * DISABLE_DISCOUNT_RATE;
   }else if(discountSelect == 3) {
   discountPrice = calcPrice * MERIT_DISCOUNT_RATE;   
   }else if(discountSelect == 4) {
   discountPrice = calcPrice * MULTICHILD_DISCOUNT_RATE;   
   }else if(discountSelect == 5) {
   discountPrice = calcPrice * PREGNANT_DISCOUNT_RATE;   
   }
   return discountPrice;
};

//==================================================================================================================================
//��� ���� �������� Ƽ�� ���Ű��� ��� 
int calcPriceResult(int calcPrice, int orderCount) {
   int totalPrice;
   totalPrice = calcPrice * orderCount;
   return totalPrice;
};

//==================================================================================================================================
//��� �ݾ� 
int resultTotalPrice(int priceResult, int tickets) {
	int totalPrice = priceResult * tickets;
	return totalPrice;
};

//==================================================================================================================================
//�ֹ����� ����
void saveOrderList(int dayOrNight,int getNumberAdultOrChild,int buyHowManyTickets,int totalPrice,int benefitNumber,int count) {
	
	if(dayOrNight == 1) {
		printf("ī��Ʈ : %d",count);
		dayOfNightArr[count] = "�ְ���";
	}else if(dayOrNight == 2) {
		dayOfNightArr[count] = "�߰���";
	}
//======================================================
	if(getNumberAdultOrChild == 1) {	
		AdultOrChildArr[count] = "�";
	}else if(getNumberAdultOrChild == 2) {
		AdultOrChildArr[count] = "û�ҳ�";
	}else if(getNumberAdultOrChild == 3) {
		AdultOrChildArr[count] = "���";
	}else if(getNumberAdultOrChild == 4) {
		AdultOrChildArr[count] = "����";
	}else if(getNumberAdultOrChild == 5) {
		AdultOrChildArr[count] = "����";
	}
//======================================================
	tickersArr[count] = buyHowManyTickets;
//======================================================
	totalPriceArr[count] = totalPrice;
//======================================================	
	if(benefitNumber == 1) {
		benefitArr[count] = "��� ���� ����";
	}else if(benefitNumber == 2) {
		benefitArr[count] = "����� ������ ����";
	}else if(benefitNumber == 3) {
		benefitArr[count] = "���������� ������ ����";
	}else if(benefitNumber == 4) {
		benefitArr[count] = "���ڳ� ������ ����";
	}else if(benefitNumber == 5) {
		benefitArr[count] = "�ӻ�� ������ ����";
	}
};

//==================================================================================================================================
//��� 
void printResult() {
	int resultPriceSum = 0;
	printf("Ƽ�� �߱��� �����մϴ�. �����մϴ�.\n");
	if(count >= 1) {
		printf("==============================�ǿ�����==============================\n"); 
		int i;
		for(i = 0; i < count; i++) {
			printf("%s\t%s\tX\t%d\t%d��     \t%s\n",dayOfNightArr[i],AdultOrChildArr[i],tickersArr[i],totalPriceArr[i],benefitArr[i]);
			resultPriceSum += totalPriceArr[i];
		}
		printf("����� �� �ݾ��� %d �� �Դϴ�.\n", resultPriceSum);
		printf("====================================================================\n");
	}
}

//==================================================================================================================================
//��� �߱��Ͻðڽ��ϱ�? �ȳ�����
int keepBuyTickets() {
	int chooseNumber; 
	printf("��� �߱� �Ͻðڽ��ϱ�?\n");
	printf("1. Ƽ�� �߱�\n");
	printf("2. ����\n");
	scanf("%d",&chooseNumber);
	return chooseNumber;
}

//==================================================================================================================================
int main() {
	
    int totalPrice = 0; // �ֹ� �Ѿ�
    while(1) {
    	
    	int choiceNumber = keepBuyTickets(); //ó�� �ȳ����� ��ӻ��� �Ȼ���! 
    	if(choiceNumber == 2) {
			printResult();
			break;
		}
		
    	int dayOrNight = inputTicketSelect(); //�߰����� �ְ����� ǥ ���� (1:�ְ�, 2:�߰�) 
    	int age = calcAge(); //������
    	int buyHowManyTickets = inputOrderCount(); //������ Ƽ�ϼ� (Ƽ�� �� ����)
		int benefitNumber = inputDiscountSelect();//������ ����(1:����, 2:�����, 3:����������, 4:���ڳ�, 5:�ӻ��)
		int	getNumberAdultOrChild = numberAdultOrChild(age); //�,û�ҳ�,���,�ֱ�,����  
   		int moneyWithDayOrNightAge = calcPriceProcess(age,dayOrNight); //�ְ�,�߰� �� ���ɿ� ���� ����ǥ
		int moneyDiscount = calcDiscount(moneyWithDayOrNightAge,benefitNumber); //������ ���� ���� 
		int totalPrice = resultTotalPrice(moneyDiscount,buyHowManyTickets); //���� ����
		
		saveOrderList(dayOrNight,getNumberAdultOrChild,buyHowManyTickets,totalPrice,benefitNumber,count); //�ְ���,û�ҳ�,Ƽ�ϼ���,��������,������ ������ ���� 
		count++;
	} 
	
   return 0;
}


