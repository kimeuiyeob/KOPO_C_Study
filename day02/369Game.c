#include <stdio.h>
#include <string.h>
//쓰레드 
#include <Windows.h>
#include <process.h>
//소리
#define DO 1046.402
#define LE 1108.731 
#define ME 1318.510

int main() {
	
    char number[4];
    int i, j, count;
    
    printf("숫자를 입력해주세요.");
    int Mynumber;
    scanf("%d",&Mynumber);
    
	//입력한 숫자만큼 반복 
    for (i = 1; i <= Mynumber; i++) {
    	
    	//박수 카운트 
        count = 0;
        
        //i숫자가 넘어오면 문자1로 number에 저장 
        
        //예 => 356이란 숫자가 i로 들어온다 
        //number에는 문자열로 356이 저장된다.
		//356문자열의 길이만큼 다시 반복한다. 즉 3번 반복
		//number[j]를 통해 각각의 자리를 가져온다.
		//그리고 그자리가 첫번째 반복에서 첫자리가 3,6,9가 있으면 카운트 -> 첫번째자리 3 -> 카운트1 
		//두번째 반복에서 두번째 자리가 3,6,9가 있으면 카운트 -> 두번째자리 5 -> 카운트X 
		//세번째 반복에서 세번째 자리가 3,6,9가 있으면 카운트 -> 세번째자리 6 -> 카운트1
		//총 카운트가 2번되면 아래 조건문을 통해 박수 2번을 친다. 
		
        sprintf(number, "%d", i);
        //strlen()함수 사용, 문자열의 길이 반환 -> 문자열의 길이만큼 반복 
        for (j = 0; j < strlen(number); j++) {
            char toChar = number[j];
            if (toChar == '3' || toChar == '6' || toChar == '9') {
                count++;
            }
        }
        if (count == 1) {
        	//0.5초간 재운다.
        	//소리출력 
        	Beep(DO,500);
            printf("짝!\n");
        } else if (count == 2) {
        	Beep(DO,500);
        	Beep(LE,500);
            printf("짝짝!\n");
        } else if (count == 3) {
        	Beep(DO,500);
        	Beep(LE,500);
        	Beep(ME,500);
            printf("짝짝짝!\n");
        } else {
        	//sleep 소문자 s는 밀리세컨드가 아니다. 
        	Sleep(500);
            printf("%d\n", i);
        }
    }
    return 0;
}

