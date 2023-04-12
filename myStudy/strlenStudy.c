#include <stdio.h>
#include <string.h>

int main() {
	
//	const char* 타입의 문자열을 받아서 해당 문자열의 길이를 반환하는 함수입니다.
//	반환 할때 보이는 size_t 타입은 객체나 값이 포함 할수 있는 최대 크기의 데이터를 표현하는 데이터 타입 입니다.
//	즉 문자열의 길이를 반환해 준다. 자바로 보면 .length()와 같은 개념이라고 생각하면된다. 

	const char *name = "KimEuiYeob";
	printf("%d\n",strlen(name));
	
	char arr[20] = "KimEuiYeob"; //문자열로 담을경우 문자열이 들어간다. 
	printf("%d\n",strlen(arr));
	printf("%s\n",arr);
	printf("\n");
	
	char arr1[20] = {'K','i','m','E','u','i','Y','e','o','b'};
	printf("%d\n",strlen(arr1));
	printf("\n");

	int i;
	for(i = 0; i < strlen(arr1); i++) {
		printf("%c\n", arr1[i]);
	}
	
} 
