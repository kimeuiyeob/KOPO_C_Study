#include <stdio.h>

int main() {
	
	char oneLetter;
	
	do{
	
	printf("���ڸ� �Է��ϼ���.\n");
	scanf("%c",&oneLetter); 
	getchar(); //�ѱ��� �ѱ��� �������� getchar()�� �������.
	
//	int a; //���ڸ� �Է��ϰ� ���͸�ġ�� ���ͱ��� ���ԵǼ� �ι�����. �׷��� ���͸� a�� ��´�. 
//	scanf("%c",&a);
		
	}while(oneLetter != 'q');
	
}
