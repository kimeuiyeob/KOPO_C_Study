#include <stdio.h>

int main() {

//�������� ����غ���
//ù��°�� for�� ������� ����Ŵ�.

//int i;
//int j;
//for(i = 1; i < 10 ; i++) {
//	for(j = 1; j<10 ; j++) {
//		printf("%d * %d = %d\n" , i , j , i*j );
//	}
//	printf("\n");
//} 

//==============================
//�ι�°�� while������ ����ڴ�.

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
