#include <stdio.h>
#include <Windows.h>
#include <process.h>

unsigned _stdcall Thread_A(void* arg) //������ �Լ� ���� 
{
	while (1)
	{
		printf("�ȳ� ���� ������1 , 1�ʰɸ���...\n");
		Sleep(1000);
	}
}

int main(void)
{
	_beginthreadex(NULL, 0, Thread_A, 0, 0, NULL); //������ ���� 

	while (1)
	{
		printf("�ȳ� ���� ������2 , 2�ʰɸ���...\n");
		Sleep(2000);

		
	}
	return 0;
}

