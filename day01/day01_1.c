#define _CRT_SECURE_NO_WARNINGS //scanf 보안경고로 인한 컴파일러 에러 방지 
#include <stdio.h>

 
int main() {
	
	int numberOne ,numberTwo;
	
	printf("입력하신 두 정수의 합,차,곱을 해드립니다.\n");
	printf("첫번째 정수를 입력하세요.\n");
	scanf("%d", &numberOne);
	printf("%s %d 입니다. \n", "입력하신 정수는 : " , numberOne);
	printf("두번째 정수를 입력하세요.\n");
	scanf("%d", &numberTwo);
	printf("%s %d 입니다. \n\n", "입력하신 정수는 : " , numberTwo);
	
	int plusNumOneNumTwo = numberOne + numberTwo;
	int minusNumOneNumTwo = numberOne - numberTwo;
	int multiNumOneNumTwo = numberOne * numberTwo;
			
	printf("%s %d 입니다. \n", "두 정수의 합은  : " , plusNumOneNumTwo);
	printf("%s %d 입니다. \n", "두 정수의 차는  : " , minusNumOneNumTwo);
	printf("%s %d 입니다. \n\n", "두 정수의 곱은  : " , multiNumOneNumTwo);
	
	printf("나눗셈은 소수점까지 나눠드리겠습니다.\n");
	printf("두 실수를 입력해주세요.\n");
	
	double floatNumberOne,floatNumberTwo;
	scanf("%lf %lf" , &floatNumberOne , &floatNumberTwo);
	
	double floatDevideNumberOneNumberTwo = floatNumberOne / floatNumberTwo;
		
	printf("입력하신 두실수는 : %.2f , %.2f 입니다.\n", floatNumberOne , floatNumberTwo);
	printf("두실수의 나눗셈은 : %.2f" , floatDevideNumberOneNumberTwo);
	
	return 0; 
	//return은 함수가 종료됐다는 의미로 함수 내의 변수나 어떤 값을 돌려주는 역할을 한다.
	//그러므로, return 0;(혹은 return;)은 해당 함수를 정상적으로 끝내고서 운영체제(Windows, Linux)에게 
	//기술한 값을 반환하고 현재 실행 중인 해당 함수를 벗어나겠다는 뜻이다.
	//결론: return 0;를 사용하는 이유는 에러 없이 정상적으로 함수가 종료되었다는 것을 알리기 위함이다.
	
}


