#include <stdio.h>

int main() {
	
	int intArr[5] = {1,2,3,4,5};
	int i,j;
	
//	for(i = 0; i < 5 ; i++) {
//		printf("%d ",intArr[i]);
//	}
	
	//2차원 배열 값 출력하기 
	int intArr2[3][4]={{1,2,3,4},{4,5,6,8},{7,8,9,10}};
	for(i = 0; i < 3; i++) {
		for(j=0 ; j <4; j++) {
				printf("%d ",intArr2[i][j]);
		}기 
		printf("\n");
	}
	
	
}
