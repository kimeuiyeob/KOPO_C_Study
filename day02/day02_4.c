#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() {
	
//	===========================================
	//�ְ��� �߰��� ���� 
	
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
		break;
	}else {
		printf("1~2���� �������ּ���.\n");
	}
	}
	
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
   
	
//	===========================================
 	//������ ��� 
 	
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
   
     
//	==========================================
	//������ Ƽ��  ����
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
	
//	==========================================
	//�ֹι�ȣ �������� , �ְ� �߰�, ������ Ƽ���� X �ؼ� �� �ݾ� ���ϱ�  
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
	
//	==========================================
	//�����ں� ���� 
	int forWeekPerson;
	
	float bodySick = 0.4;
	float saveCountry = 0.5;
	float Manybaby = 0.2;
	float pregnent = 0.15;
	
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
			break;
		}else if(forWeekPerson == 2) {
			printf("2�� �����ϼ̽��ϴ�.\n");
			break;
		}else if(forWeekPerson == 3) {
			printf("3�� �����ϼ̽��ϴ�.\n");
			break;
		}else if(forWeekPerson == 4) {
			printf("4�� �����ϼ̽��ϴ�.\n");
			break;
		}else if(forWeekPerson == 5) {
			printf("5�� �����ϼ̽��ϴ�.\n");
			break;
		}else {
			printf("1~5���� �������ּ���.\n");
		}
	}
	�� 
//	==========================================
	//�� �ݾ׿��� ���αݾ� �� 
	
	if(forWeekPerson == 1){
		totalPrice=	totalPrice;
	}else if(forWeekPerson == 2) {
		totalPrice=	totalPrice * bodySick;
	}else if(forWeekPerson == 3) {
		totalPrice=	totalPrice * saveCountry;
	}else if(forWeekPerson == 4) {
		totalPrice=	totalPrice * Manybaby;
	}else if(forWeekPerson == 5) {
		totalPrice=	totalPrice * pregnent;   
	}
	
	printf("������ %d �� �Դϴ�.\n",totalPrice); 
	printf("�����մϴ�.\n"); 
	
} 
