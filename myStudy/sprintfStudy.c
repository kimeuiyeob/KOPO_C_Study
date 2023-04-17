#include <stdio.h>
#include <string.h>

int main() {
	
	//sprintf 공부하기
	//sprintf 는 string = printf의 줄임말이다.
	//출력값을 문자열에 저장하는 함수이다.
	
//	sprintf(stringVariable,"문자열");  <== stringVariable변수에는 문자열이 저장된다. 
//	sprintf(stringVariable,"%d",10);   <== 처음에 정수 10이 문자열 10으로 변환되 stringVariable 저장된다. 

	 
	char msg1[50], msg2[50], msg3[50];
	
	int year = 2023;
	int month = 4;
	int day = 12;
	

	sprintf(msg1,"hello"); //hello 문자열을 msg1배열에 단순 저장 
	printf("%s\n",msg1);
	
	sprintf(msg2,"%s world!", msg1); //msg1의 값에서 + world문자열을 추가해서 msg2에 저장
	printf("%s\n",msg2); 
	
	sprintf(msg3, "%s %s 오늘은 %d %d %d\n", msg1, msg2, year, month, day);
	printf("%s\n",msg3);

	
} 
