#include <stdio.h>
#include <Windows.h>
#include <process.h>

unsigned _stdcall Thread_A(void* arg) //쓰레드 함수 선언 
{
	while (1)
	{
		printf("안녕 나는 쓰레드1 , 1초걸리지...\n");
		Sleep(1000);
	}
}

int main(void)
{
	_beginthreadex(NULL, 0, Thread_A, 0, 0, NULL); //쓰레드 생성 

	while (1)
	{
		printf("안녕 나는 쓰레드2 , 2초걸리지...\n");
		Sleep(2000);

		
	}
	return 0;
}

