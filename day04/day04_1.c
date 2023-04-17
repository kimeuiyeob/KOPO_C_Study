#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 
//======================================================
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
//======================================================
//나이에 따른 범위
const int MIN_BABY = 1;
const int MIN_CHILD = 3; 
const int MIN_TEEN = 13; 
const int MIN_ADULT = 19;
const int MAX_CHILD = 12; 
const int MAX_TEEN = 18; 
const int MAX_ADULT = 64;
//======================================================
//나이에 따른 그룹
const int BABY = 1, CHILD = 2, TEEN = 3, ADULT = 4, OLD = 5;
//======================================================
//할인율
const float DISABLE_DISCOUNT_RATE = 0.6;
const float MERIT_DISCOUNT_RATE = 0.5;
const float MULTICHILD_DISCOUNT_RATE = 0.8;
const float PREGNANT_DISCOUNT_RATE = 0.85;
//======================================================
//최대주문량
const int MAX_COUNT = 10, MIN_COUNT = 1;
//======================================================
//구매 목록 저장 배열
char* dayOfNightArr[100]; //1:주간, 2:야간 
char* AdultOrChildArr[100]; //1:어른, 2:청소년, 3:어린이, 4:노인, 5:애기 
int tickersArr[100]; //구매한 티켓수 
int totalPriceArr[100]; //마지막 결과금액 
char* benefitArr[100]; //우대사항 
int count = 0;

//==================================================================================================================================
//구매 티켓 주간인지 야간인지 
int inputTicketSelect() {
   int morningNight;   
   while(1) {
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
};

//==================================================================================================================================
//구매한 티켓수 
int inputOrderCount() {
   int buyHowManyTicket;
   while(1) {
      printf("티켓을 몇개 주문하시겠습니까?\n");
      printf("최소 1개 , 최대 10개 까지 구매 가능합니다.\n");
      scanf("%d",&buyHowManyTicket);
      if(buyHowManyTicket > MAX_COUNT && buyHowManyTicket < MIN_COUNT) {
         continue;
      }
      break; 
   }
   return buyHowManyTicket;
};

//==================================================================================================================================
//우대사항 선택 
int inputDiscountSelect() {
   int forWeekPerson;
   int sale;
   while(1) {
      printf("우대사항을 선택해 주세요.\n");
      printf("1. 없음 \n");
      printf("2. 장애인\n");
      printf("3. 국가유공자\n");
      printf("4. 다자녀\n");
      printf("5. 임산부\n");
      scanf("%d",&forWeekPerson);
      
      if(forWeekPerson == 1) {
         printf("1번 선택하셨습니다.\n");
         sale = 1;
         break;
      }else if(forWeekPerson == 2) {
         printf("2번 선택하셨습니다.\n");
         sale = 2;
         break;
      }else if(forWeekPerson == 3) {
         printf("3번 선택하셨습니다.\n");
         sale = 3;
         break;
      }else if(forWeekPerson == 4) {
         printf("4번 선택하셨습니다.\n");
         sale = 4;
         break;
      }else if(forWeekPerson == 5) {
         printf("5번 선택하셨습니다.\n");
         sale = 5;
         break;
      }else {
         printf("1~5번중 선택해주세요.\n");
      }
   }
   return sale;
};

//==================================================================================================================================
//만나이 계산 
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
};

//==================================================================================================================================
//나이로 어른,청소년 숫자 구분
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
//연령에 따른 티켓 가격 함수 
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
//우대사항 가격으로 할인율 계산 
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
//결과 나온 가격으로 티켓 구매갯수 계산 
int calcPriceResult(int calcPrice, int orderCount) {
   int totalPrice;
   totalPrice = calcPrice * orderCount;
   return totalPrice;
};

//==================================================================================================================================
//결과 금액 
int resultTotalPrice(int priceResult, int tickets) {
	int totalPrice = priceResult * tickets;
	return totalPrice;
};

//==================================================================================================================================
//주문내역 저장
void saveOrderList(int dayOrNight,int getNumberAdultOrChild,int buyHowManyTickets,int totalPrice,int benefitNumber,int count) {
	
	if(dayOrNight == 1) {
		printf("카운트 : %d",count);
		dayOfNightArr[count] = "주간권";
	}else if(dayOrNight == 2) {
		dayOfNightArr[count] = "야간권";
	}
//======================================================
	if(getNumberAdultOrChild == 1) {	
		AdultOrChildArr[count] = "어른";
	}else if(getNumberAdultOrChild == 2) {
		AdultOrChildArr[count] = "청소년";
	}else if(getNumberAdultOrChild == 3) {
		AdultOrChildArr[count] = "어린이";
	}else if(getNumberAdultOrChild == 4) {
		AdultOrChildArr[count] = "노인";
	}else if(getNumberAdultOrChild == 5) {
		AdultOrChildArr[count] = "아이";
	}
//======================================================
	tickersArr[count] = buyHowManyTickets;
//======================================================
	totalPriceArr[count] = totalPrice;
//======================================================	
	if(benefitNumber == 1) {
		benefitArr[count] = "우대 사항 없음";
	}else if(benefitNumber == 2) {
		benefitArr[count] = "장애인 우대사항 적용";
	}else if(benefitNumber == 3) {
		benefitArr[count] = "국가유공자 우대사항 적용";
	}else if(benefitNumber == 4) {
		benefitArr[count] = "다자녀 우대사항 적용";
	}else if(benefitNumber == 5) {
		benefitArr[count] = "임산부 우대사항 적용";
	}
};

//==================================================================================================================================
//출력 
void printResult() {
	int resultPriceSum = 0;
	printf("티켓 발권을 종료합니다. 감사합니다.\n");
	if(count >= 1) {
		printf("==============================의엽랜드==============================\n"); 
		int i;
		for(i = 0; i < count; i++) {
			printf("%s\t%s\tX\t%d\t%d원     \t%s\n",dayOfNightArr[i],AdultOrChildArr[i],tickersArr[i],totalPriceArr[i],benefitArr[i]);
			resultPriceSum += totalPriceArr[i];
		}
		printf("입장료 총 금액은 %d 원 입니다.\n", resultPriceSum);
		printf("====================================================================\n");
	}
}

//==================================================================================================================================
//계속 발권하시겠습니까? 안내문구
int keepBuyTickets() {
	int chooseNumber; 
	printf("계속 발권 하시겠습니까?\n");
	printf("1. 티켓 발권\n");
	printf("2. 종료\n");
	scanf("%d",&chooseNumber);
	return chooseNumber;
}

//==================================================================================================================================
int main() {
	
    int totalPrice = 0; // 주문 총액
    while(1) {
    	
    	int choiceNumber = keepBuyTickets(); //처음 안내문구 계속살지 안살지! 
    	if(choiceNumber == 2) {
			printResult();
			break;
		}
		
    	int dayOrNight = inputTicketSelect(); //야간인지 주간인지 표 선택 (1:주간, 2:야간) 
    	int age = calcAge(); //만나이
    	int buyHowManyTickets = inputOrderCount(); //구매한 티켓수 (티켓 총 개수)
		int benefitNumber = inputDiscountSelect();//우대사항 선택(1:없음, 2:장애인, 3:국가유공자, 4:다자녀, 5:임산부)
		int	getNumberAdultOrChild = numberAdultOrChild(age); //어른,청소년,어린이,애기,노인  
   		int moneyWithDayOrNightAge = calcPriceProcess(age,dayOrNight); //주간,야간 및 연령에 따른 가격표
		int moneyDiscount = calcDiscount(moneyWithDayOrNightAge,benefitNumber); //우대사항 가격 할인 
		int totalPrice = resultTotalPrice(moneyDiscount,buyHowManyTickets); //최종 가격
		
		saveOrderList(dayOrNight,getNumberAdultOrChild,buyHowManyTickets,totalPrice,benefitNumber,count); //주간권,청소년,티켓수량,최종가격,우대사항 데이터 저장 
		count++;
	} 
	
   return 0;
}


