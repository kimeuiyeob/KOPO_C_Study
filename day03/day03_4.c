#include <stdio.h>

int main() {
	
 printf("숫자를 입력해주세요.");
    int limit;
    scanf("%d", &limit);

    int numberArr[limit][limit];
    int num = 1, direct = 1, x = 0, y = -1;
    int i,j;
    
    while (limit > 0) {
    	
        for (i = 0; i < limit; i++) {
            y += direct;
            numberArr[x][y] = num++;
        }
        
        limit--;
        
        for (i = 0; i < limit; i++) {
            x += direct;
            numberArr[x][y] = num++;
        }
        direct = -direct;
    }
    
 	//출력 
    for (i = 0; i < limit; i++) {
        for (j = 0; j < limit; j++) {
            printf("%d\t", numberArr[i][j]);
        }
        printf("\n");
    }
    
}
