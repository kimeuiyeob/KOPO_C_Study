#include <stdio.h>


//���� Ȯ�� �Լ� 
int isYoonDal(int a) {
    if ((a % 4 == 0) && !(a % 100 == 0) || (a % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
	
    int year; // ����� �Է� <== �⵵ �޾ƿ��� 
    int month; // ����� �Է� <== �� �޾ƿ��� 
    int weekDay; // ����� ����
    int sum = 0; // ������ ��� �� ��� ����
    
    int basicyear[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //�޺��� ������ ��¥ ���� 
    
    printf("�⵵ �Է� : \n");
    scanf("%d", &year); 
    
    printf("�� �Է� : \n");
    scanf("%d", &month);
 
    //���� Ȯ��
    if (isYoonDal(year)) { //���ϰ��� 1�ϴ�� ���� 
        basicyear[1]++; //2�� 29�Ϸ� ���� 
    } 
 
    //1900�⵵���� ����
    int i;
    for (i = 1900 ; i < year; i++) {
        if (isYoonDal(i)) {
        	sum += 366; //�����Ͻ� �Ϸ�� �� 
		} else {
			sum += 365;
		} 
    }
    //�����Ϻ��� �����̿��� �Ϸ��߰� 
    sum += 1;
 
    //�Է��� �ޱ��� ��ĥ���� 
    for (i = 0 ; i < month - 1 ; i++) {
        sum += basicyear[i];
    }
 
    //1��1�� ���� �������� ���
    weekDay = sum % 7;
 
    printf("==================== %d�� %d��====================\n",year,month);
    printf("��\t��\tȭ\t��\t��\t��\t��\n");
 
    //���� ���Ͽ� ���� ����
    int j;
    for (j = 0 ; j < weekDay ; j++) {
        printf("\t");
    }
 
    for (i = 1 ; i <= basicyear[month - 1] ; i++) {
        printf("%d\t", i);
        if (weekDay == 6) {
            weekDay = -1;
            printf("\n");
        }
        weekDay++;
    }
    printf("\n");
}


