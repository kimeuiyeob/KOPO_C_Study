#include <stdio.h>

//C�� ���������̶� �޼��尡 main�Ʒ������� ���� ���ؼ� ȣ���� ���Ѵ�.
//�׷��� �޼��尡 �Ʒ��־ ���� ���Ǹ� �س����� �ȴ�.
 
int plus(int numberOne, int numberTwo);
int minus(int numberOne, int numberTwo);
int mul(int numberOne, int numberTwo);
float div(int numberOne, int numberTwo);

int main() {
	
	int number10;
	int number5;
	
	printf("%s","���� �ΰ��� �Է����ּ���.\n");
	scanf("%d%d",&number10,&number5);
	
	int NumberOnePlusNumberTwo = plus(number10,number5);
	int NumberOneMinusNumberTwo = minus(number10,number5);
	int NumberOneMultiNumberTwo = mul(number10,number5);
	float NumberOneDivideNumberTwo = div(number10,number5);
	
	printf("���� : %d + %d = %d\n",number10,number5,NumberOnePlusNumberTwo);
	printf("���� : %d - %d = %d\n",number10,number5,NumberOneMinusNumberTwo);
	printf("���� : %d X %d = %d\n",number10,number5,NumberOneMultiNumberTwo);
	printf("������ : %d / %d = %.2f\n",number10,number5,NumberOneDivideNumberTwo);
	
	return 0;
	
}

int plus(int numberOne, int numberTwo) {
    return numberOne + numberTwo;
  } 
  
 int minus(int numberOne, int numberTwo) {
    return numberOne - numberTwo;
  }
  
 int mul(int numberOne, int numberTwo) {
    return numberOne * numberTwo;
  }
  
 float div(int numberOne, int numberTwo) {
 	return (float)numberOne / (float)numberTwo;
  }
