#include <stdio.h>
#include <string.h>

int main() {
	
//	const char* Ÿ���� ���ڿ��� �޾Ƽ� �ش� ���ڿ��� ���̸� ��ȯ�ϴ� �Լ��Դϴ�.
//	��ȯ �Ҷ� ���̴� size_t Ÿ���� ��ü�� ���� ���� �Ҽ� �ִ� �ִ� ũ���� �����͸� ǥ���ϴ� ������ Ÿ�� �Դϴ�.
//	�� ���ڿ��� ���̸� ��ȯ�� �ش�. �ڹٷ� ���� .length()�� ���� �����̶�� �����ϸ�ȴ�. 

	const char *name = "KimEuiYeob";
	printf("%d\n",strlen(name));
	
	char arr[20] = "KimEuiYeob"; //���ڿ��� ������� ���ڿ��� ����. 
	printf("%d\n",strlen(arr));
	printf("%s\n",arr);
	printf("\n");
	
	char arr1[20] = {'K','i','m','E','u','i','Y','e','o','b'};
	printf("%d\n",strlen(arr1));
	printf("\n");

	int i;
	for(i = 0; i < strlen(arr1); i++) {
		printf("%c\n", arr1[i]);
	}
	
} 
