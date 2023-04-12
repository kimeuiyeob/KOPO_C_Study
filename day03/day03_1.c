#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	srand(time(NULL));
	
	int i = 0;
	while( i != 3) {
		
		Sleep(500);
		i = rand() % 100;
		printf("%d\n",i);
	}

	return 0;	
	
}
