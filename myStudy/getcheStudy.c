#include <stdio.h>
#define ENTER 13

int main() {
	
	char *introduce;
	int i = 0;
	int j;
	
	printf("�ڱ� �Ұ��� ���ּ���.\n");
	
	introduce = (char *)malloc(sizeof(char));
	
	while(!((introduce[i]=getche()) == ENTER)) {
		i++;
		realloc(introduce,sizeof(char)*(i+1));
	}
	
	introduce[i] = '\0';
	putchar('\n');
	
	printf("%s\n",introduce);
	
}
