#include <stdio.h>

int main() {
	
	char oneLetter;
	
	do{
	
	printf("문자를 입력하세요.\n");
	scanf("%c",&oneLetter); 
	getchar(); //한글자 한글자 받으려면 getchar()를 사용하자.
	
//	int a; //문자를 입력하고 엔터를치면 엔터까지 담기게되서 두번돈다. 그래서 엔터를 a에 담는다. 
//	scanf("%c",&a);
		
	}while(oneLetter != 'q');
	
}
