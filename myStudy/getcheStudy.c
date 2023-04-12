#include <stdio.h>
#define ENTER 13

int main() {
	
	char *introduce;
	int i = 0;
	int j;
	
	printf("자기 소개를 해주세요.\n");
	
	introduce = (char *)malloc(sizeof(char));
	
	while(!((introduce[i]=getche()) == ENTER)) {
		i++;
		realloc(introduce,sizeof(char)*(i+1));
	}
	
	introduce[i] = '\0';
	putchar('\n');
	
	printf("%s\n",introduce);
	
}
