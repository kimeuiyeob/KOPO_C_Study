#include <stdio.h>
#include <string.h>

int main() {
	
	//sprintf �����ϱ�
	//sprintf �� string = printf�� ���Ӹ��̴�.
	//��°��� ���ڿ��� �����ϴ� �Լ��̴�.
	
//	sprintf(stringVariable,"���ڿ�");  <== stringVariable�������� ���ڿ��� ����ȴ�. 
//	sprintf(stringVariable,"%d",10);   <== ó���� ���� 10�� ���ڿ� 10���� ��ȯ�� stringVariable ����ȴ�. 

	 
	char msg1[50], msg2[50], msg3[50];
	
	int year = 2023;
	int month = 4;
	int day = 12;
	

	sprintf(msg1,"hello"); //hello ���ڿ��� msg1�迭�� �ܼ� ���� 
	printf("%s\n",msg1);
	
	sprintf(msg2,"%s world!", msg1); //msg1�� ������ + world���ڿ��� �߰��ؼ� msg2�� ����
	printf("%s\n",msg2); 
	
	sprintf(msg3, "%s %s ������ %d %d %d\n", msg1, msg2, year, month, day);
	printf("%s\n",msg3);

	
} 
