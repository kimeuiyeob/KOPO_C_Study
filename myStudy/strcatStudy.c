#include <string.h>
#include <stdio.h>

int main() {
	
	//strcat�� ���ؼ� �˾ƺ���!
	//strcat�� ������ ���� ���ڿ��� �̾� �ٿ��ִ� ������ �Ѵ�.
	
	char firstArr[]= "KimEuiYeob";
	char SecondArr[] = "isBest";
	
	printf("%s\n",firstArr);
	printf("%s\n",SecondArr);
	//
	
	strcat(firstArr,SecondArr);
	
	printf("%s\n",firstArr);
	printf("%d\n",strlen(firstArr));
	
}
