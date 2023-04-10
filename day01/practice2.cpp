#include <stdio.h>

int main() {

//구구단을 출력해보자
//첫번째는 for문 방식으로 만들거다.

//int i;
//int j;
//for(i = 1; i < 10 ; i++) {
//	for(j = 1; j<10 ; j++) {
//		printf("%d * %d = %d\n" , i , j , i*j );
//	}
//	printf("\n");
//} 

//==============================
//두번째는 while문으로 만들겠다.

int i = 0;
while(i < 9) {
	i++;
	int j = 0;
 	while(j < 9) {
 		j++;
 		printf("%d * %d = %d\n" , i , j , i*j );
	 }
    printf("\n");
}

//==============================
return 0;
} 
