#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	printf("������ �Է����ּ���\n");
	int number1;
	int number2;
	int number3;
	scanf("%d",&number1);
	
	printf("������ �Է����ּ���\n");
	scanf("%d",&number2);
	
	printf("������ �Է����ּ���\n");
	scanf("%d",&number3);
	
	printf("�Է��Ͻ� ���� : %d , %d , %d\n",number1,number2,number3);
	
	if(number1 % 2 == 0) {
		printf("A�� ¦���Դϴ�.\n");
	}else {
		printf("A�� Ȧ���Դϴ�.\n");	
	}
	if(number2 % 2 == 0) {
		printf("B�� ¦���Դϴ�.\n");
	} else {
		printf("B�� Ȧ���Դϴ�.\n");	
	}
	if(number3 % 2 == 0) {
		printf("C�� ¦���Դϴ�.\n");
	} else {
		printf("C�� Ȧ���Դϴ�.\n");	
	}
	
	int plusTotal = number1 + number2 + number3;
	int minusTotal = number1 - number2 - number3;
	int multiTotal = number1 * number2 * number3;
	
	printf("A + B + C = %d + %d + %d = %d\n",number1,number2,number3,plusTotal);
	printf("A - B - C = %d - %d - %d = %d\n",number1,number2,number3,minusTotal);
	printf("A * B * C = %d * %d * %d = %d\n",number1,number2,number3,multiTotal);
	
	return 0; 
}
