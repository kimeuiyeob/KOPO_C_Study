#include <stdio.h>

int main() {
	
int i=0;
//위에 변수i를 생성하였다면 초기화 생략가능하다. 
//for(; i < 5 ; i++) {
//	printf("%d 번째\n",i);
//}

//조건식 생략하게 되면 무한루프에 빠지게된다.
//for(int i = 0 ; ; i++){
//    printf("%d 번째\n",i);
//}

////증감식 생략하게 되면 이것두 무한루프이다. 0에서 계속 돌고 있기때문... 
//for(int i = 0 ; i < 10;){
//    printf("%d 번째\n",i);
//}


////실행문이 한라인일 경우 { } 대괄호 생략 가능
for(int i = 0; i < 10; i++)
    printf("%d 번째\n",i);
    
return 0;
 
}


