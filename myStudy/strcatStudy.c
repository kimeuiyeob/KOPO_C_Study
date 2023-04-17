#include <string.h>
#include <stdio.h>

int main() {
	
	//strcat에 대해서 알아보자!
	//strcat은 간단히 말해 문자열을 이어 붙여주는 역할을 한다.
	
	char firstArr[]= "KimEuiYeob";
	char SecondArr[] = "isBest";
	
	printf("%s\n",firstArr);
	printf("%s\n",SecondArr);
	//
	
	strcat(firstArr,SecondArr);
	
	printf("%s\n",firstArr);
	printf("%d\n",strlen(firstArr));
	
}
