#define _CRT_SECURE_NO_WARNINGS //scanf ���Ȱ��� ���� �����Ϸ� ���� ���� 
#include <stdio.h>

 
int main() {
	
	int numberOne ,numberTwo;
	
	printf("�Է��Ͻ� �� ������ ��,��,���� �ص帳�ϴ�.\n");
	printf("ù��° ������ �Է��ϼ���.\n");
	scanf("%d", &numberOne);
	printf("%s %d �Դϴ�. \n", "�Է��Ͻ� ������ : " , numberOne);
	printf("�ι�° ������ �Է��ϼ���.\n");
	scanf("%d", &numberTwo);
	printf("%s %d �Դϴ�. \n\n", "�Է��Ͻ� ������ : " , numberTwo);
	
	int plusNumOneNumTwo = numberOne + numberTwo;
	int minusNumOneNumTwo = numberOne - numberTwo;
	int multiNumOneNumTwo = numberOne * numberTwo;
			
	printf("%s %d �Դϴ�. \n", "�� ������ ����  : " , plusNumOneNumTwo);
	printf("%s %d �Դϴ�. \n", "�� ������ ����  : " , minusNumOneNumTwo);
	printf("%s %d �Դϴ�. \n\n", "�� ������ ����  : " , multiNumOneNumTwo);
	
	printf("�������� �Ҽ������� �����帮�ڽ��ϴ�.\n");
	printf("�� �Ǽ��� �Է����ּ���.\n");
	
	double floatNumberOne,floatNumberTwo;
	scanf("%lf %lf" , &floatNumberOne , &floatNumberTwo);
	
	double floatDevideNumberOneNumberTwo = floatNumberOne / floatNumberTwo;
		
	printf("�Է��Ͻ� �νǼ��� : %.2f , %.2f �Դϴ�.\n", floatNumberOne , floatNumberTwo);
	printf("�νǼ��� �������� : %.2f" , floatDevideNumberOneNumberTwo);
	
	return 0; 
	//return�� �Լ��� ����ƴٴ� �ǹ̷� �Լ� ���� ������ � ���� �����ִ� ������ �Ѵ�.
	//�׷��Ƿ�, return 0;(Ȥ�� return;)�� �ش� �Լ��� ���������� ������ �ü��(Windows, Linux)���� 
	//����� ���� ��ȯ�ϰ� ���� ���� ���� �ش� �Լ��� ����ڴٴ� ���̴�.
	//���: return 0;�� ����ϴ� ������ ���� ���� ���������� �Լ��� ����Ǿ��ٴ� ���� �˸��� �����̴�.
	
}


