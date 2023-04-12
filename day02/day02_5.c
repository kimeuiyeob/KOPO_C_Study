#include <stdio.h>

int main() {
		
	int i,j,k,m,n;
	printf("=== ±¸±¸´Ü ===\n\n");
	for(i = 0; i < 3; i++) {
		for(j = 1,k=2 ,m =3, n =1; n < 10; n++) {
			printf("%d * %d = %d \t %d * %d = %d \t  %d * %d = %d\n", (j+(i*3)),n,(j+(i*3))*n, (k+(i*3)),n,(k+(i*3))*n, (m+(i*3)),n,(m+(i*3))*n );
		}
		printf("\n");
	}
	
}
