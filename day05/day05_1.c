#include <stdio.h>

//C는 절차지향이라 메서드가 main아래있으면 알지 못해서 호출을 못한다.
//그래서 메서드가 아래있어도 위에 정의를 해노으면 된다.
 
int plus(int numberOne, int numberTwo);
int minus(int numberOne, int numberTwo);
int mul(int numberOne, int numberTwo);
float div(int numberOne, int numberTwo);

int main() {
	
	int number10;
	int number5;
	
	printf("%s","정수 두개를 입력해주세요.\n");
	scanf("%d%d",&number10,&number5);
	
	int NumberOnePlusNumberTwo = plus(number10,number5);
	int NumberOneMinusNumberTwo = minus(number10,number5);
	int NumberOneMultiNumberTwo = mul(number10,number5);
	float NumberOneDivideNumberTwo = div(number10,number5);
	
	printf("덧셈 : %d + %d = %d\n",number10,number5,NumberOnePlusNumberTwo);
	printf("뺄셈 : %d - %d = %d\n",number10,number5,NumberOneMinusNumberTwo);
	printf("곱셈 : %d X %d = %d\n",number10,number5,NumberOneMultiNumberTwo);
	printf("나눗셈 : %d / %d = %.2f\n",number10,number5,NumberOneDivideNumberTwo);
	
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
