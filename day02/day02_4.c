#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() {
	
//	===========================================
	//주간권 야간권 선택 
	
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
		break;
	}else {
		printf("1~2번중 선택해주세요.\n");
	}
	}
	
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
   
	
//	===========================================
 	//만나이 계산 
 	
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
   
     
//	==========================================
	//구매한 티켓  개수
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
	
//	==========================================
	//주민번호 연령으로 , 주간 야간, 구매한 티켓을 X 해서 총 금액 구하기  
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
	//구매자별 혜택 
	int forWeekPerson;
	
	float bodySick = 0.4;
	float saveCountry = 0.5;
	float Manybaby = 0.2;
	float pregnent = 0.15;
	
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
			break;
		}else if(forWeekPerson == 2) {
			printf("2번 선택하셨습니다.\n");
			break;
		}else if(forWeekPerson == 3) {
			printf("3번 선택하셨습니다.\n");
			break;
		}else if(forWeekPerson == 4) {
			printf("4번 선택하셨습니다.\n");
			break;
		}else if(forWeekPerson == 5) {
			printf("5번 선택하셨습니다.\n");
			break;
		}else {
			printf("1~5번중 선택해주세요.\n");
		}
	}
	기 
//	==========================================
	//총 금액에서 할인금액 빼 
	
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
	
	printf("가격은 %d 원 입니다.\n",totalPrice); 
	printf("감사합니다.\n"); 
	
} 
