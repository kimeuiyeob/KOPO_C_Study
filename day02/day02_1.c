#include <stdio.h> //출력 
#include <string.h> //문자열 관련 strcpy(), strcat(), strcmp(), strchr(), strlen() 등이 있다. 
#include <conio.h> //conio.h 는 콘솔 입출력 함수를 제공하는 헤더 => getch()
//값을 입력할 때까지 대기했다가 값이 들어오면 버퍼에 저장했다가 버퍼에서 꺼내서 리턴한다.
#include <stdlib.h> // 동적 할당 관련 함수, 난수 생성 함수, 정수의 연산 함수, 검색 및 정렬 함수 등이있다. 
#include <time.h> //시간 간 관련 함수들 time(), localtime(), ctime(), asctime() 함수등이 있다. 

int main(void) {
	
	//현재 날짜  받아오기 
	struct tm * t;
    time_t base = time(NULL);
    t = localtime(&base);
    int nowYear = t->tm_year + 1900;
    int nowMonth = t->tm_mon + 1;
    int nowDay = t->tm_mday;
	 
	//주민번호 들어갈 배열 
 	char me[13];
	int i;
	int year, age;
	
	printf("주민번호를 입력해주세요 => ");
	
	for (i = 0; i < 6; i++) {
		me[i] = getche();   
	}
    printf("-");

 	for (; i < 13; i++) {
  		me[i] = getch();        
  		printf("*");
 	}
	
	me[13] = getchar();  
   
   if(me[6] == '1' || me[6] == '2') {
   		year = 1900 + ((me[0] - 48)*10 +(me[1]-48));
   }else {
   		year = 2000 + ((me[0] - 48)*10 +(me[1]-48));
   }
   
   int myMonth = (me[2]-48) + (me[3]-48);
   int myDay =  (me[4]-48) + (me[5]-48);
   
   if(myMonth <= nowMonth && myDay <= nowDay) {
   		age = nowYear - year;
   		printf("만나이 : %d\n",age);
   }else {
   		age = nowYear - year + 1;
   		printf("만나이 : %d\n",age);
   }
   
   if(me[6] == '1' || me[6] == '3') {
   		printf("성별 : 남자\n");
   }else {
   		printf("성별 : 여자\n");
   } 

}
	 

