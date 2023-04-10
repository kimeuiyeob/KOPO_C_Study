#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
//	1. 입력한 값이 홀수인지 짝수인지를 판별하는 프로그램을 작성하시오.
//	숫자 입력 : 100
//	짝수 입니다.

//	printf("숫자를 입력해주세요.\n");
//	int number;
//	scanf("%d" , &number);
//	
//	if(number % 2 == 0) {
//			printf("입력하신 숫자는 짝수 입니다.\n");
//	}else {
//			printf("입력하신 숫자는 홀수 입니다.\n");
//	}

//	=================================================

//	2. 두 개의 숫자를 입력 받아 큰 수를 출력하는 프로그램 작성
//	숫자 A 입력 : 20
//	숫자 B 입력 : 50
//	큰 숫자는 50 입니다.
	
//	printf("두 정수를 입력해주세요.\n");
//	int number1, number2;
//	scanf("%d %d",&number1, &number2);
//	
//	if(number1 > number2) {
//		printf("큰 숫자는 : %d 입니다.",number1);
//	}else {
//		printf("큰 숫자는 : %d 입니다.",number2);
//	}
	
//	=================================================

//	3. 5개의 숫자를 입력 받아 최저 값을 출력하는 프로그램 작성
//	숫자 A 입력 : 10
//	숫자 B 입력 : 20
//	숫자 C 입력 : 30
//	숫자 D 입력 : 40
//	숫자 E 입력 : 50
//	최대값은 50 입니다.
//	최저값은 10 입니다.

//	int numberArray[5];
//	printf("정수 5개를 입력해주세요.\n");
//	int i;
//	for(i = 0; i < 5; i++) {
//		scanf("%d",&numberArray[i]);
//		printf("%d 번째 숫자 입력 : %d\n", i+1 ,numberArray[i]);
//	}
//	int max = numberArray[0];
//	for(i = 0; i < 5; i++) {
//		if(max < numberArray[i]) {
//			max = numberArray[i];
//		}
//	}
//	printf("최대값은 %d 입니다.\n" , max);
//	
//	int min = numberArray[0];
//	for(i = 0; i < 5; i++) {
//		if(min > numberArray[i]) {
//			min = numberArray[i];
//		}
//	}
//	printf("최저값은 %d 입니다.\n" , min);

//	=================================================

//	4. 윤년인지 아닌지를 판단하는 프로그램 작성
//
//	원하는 년도를 입력하세요 : 2000
//	윤년 입니다.
//	* 아래 두 가지 중 하나만 만족하면 윤년
//	- year가 4로 나누어 떨어지고, 
//  	100으로는 나누어 떨어지지 않음
//	- year가 400으로 나누어 떨어짐

//	printf("년도를 입력해주세요.\n");
//	int year;
//	scanf("%d",&year);
//	if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//		printf("%d 년은 윤년입니다.",year);
//	} else {
//		printf("%d 년은 윤년이 아닙니다.",year);
//	}

//	=================================================

//	5. 입력한 년도의 각 월의 마지막 날을 출력하기
//	원하는 연도를 입력하세요 : 2004
//	2004년은 다음과 같습니다.
//	1월 : 31일
//	2월 : 29일 * 윤년 29일, 평년 28일
//	3월 : 31일
//	4월 : 30일
//	5월 : 31일
//	6월 : 31일
//	7월 : 30일
//	8월 : 31일
//	9월 : 30일
//	10월 : 31일
//	11월 : 30일
//	12월 : 31일
	
	printf("년도를 입력해주세요.\n");
	int year;
	scanf("%d",&year);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d 년은 다음과 같습니다.\n",year);
		printf("1월 : 31일\n");
		printf("2월 : 29일\n");
		printf("3월 : 31일\n");
		printf("4월 : 30일\n");
		printf("5월 : 31일\n");
		printf("6월 : 31일\n");
		printf("7월 : 30일\n");
		printf("8월 : 31일\n");
		printf("9월 : 30일\n");
		printf("10월 : 31일\n");
		printf("11월 : 30일\n");
		printf("12월 : 31일\n");
	}else {
		printf("%d 년은 다음과 같습니다.\n",year);
		printf("1월 : 31일\n");
		printf("2월 : 28일\n");
		printf("3월 : 31일\n");
		printf("4월 : 30일\n");
		printf("5월 : 31일\n");
		printf("6월 : 31일\n");
		printf("7월 : 30일\n");
		printf("8월 : 31일\n");
		printf("9월 : 30일\n");
		printf("10월 : 31일\n");
		printf("11월 : 30일\n");
		printf("12월 : 31일\n");
	}

//	=================================================
	 return 0;
}
