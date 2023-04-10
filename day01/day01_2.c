#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	printf("정수를 입력해주세요\n");
	int number1;
	int number2;
	int number3;
	scanf("%d",&number1);
	
	printf("정수를 입력해주세요\n");
	scanf("%d",&number2);
	
	printf("정수를 입력해주세요\n");
	scanf("%d",&number3);
	
	printf("입력하신 정수 : %d , %d , %d\n",number1,number2,number3);
	
	if(number1 % 2 == 0) {
		printf("A는 짝수입니다.\n");
	}else {
		printf("A는 홀수입니다.\n");	
	}
	if(number2 % 2 == 0) {
		printf("B는 짝수입니다.\n");
	} else {
		printf("B는 홀수입니다.\n");	
	}
	if(number3 % 2 == 0) {
		printf("C는 짝수입니다.\n");
	} else {
		printf("C는 홀수입니다.\n");	
	}
	
	int plusTotal = number1 + number2 + number3;
	int minusTotal = number1 - number2 - number3;
	int multiTotal = number1 * number2 * number3;
	
	printf("A + B + C = %d + %d + %d = %d\n",number1,number2,number3,plusTotal);
	printf("A - B - C = %d - %d - %d = %d\n",number1,number2,number3,minusTotal);
	printf("A * B * C = %d * %d * %d = %d\n",number1,number2,number3,multiTotal);
	
	return 0; 
}
