#include <stdio.h>
#include <string.h>
//������ 
#include <Windows.h>
#include <process.h>
//�Ҹ�
#define DO 1046.402
#define LE 1108.731 
#define ME 1318.510

int main() {
	
    char number[4];
    int i, j, count;
    
    printf("���ڸ� �Է����ּ���.");
    int Mynumber;
    scanf("%d",&Mynumber);
    
	//�Է��� ���ڸ�ŭ �ݺ� 
    for (i = 1; i <= Mynumber; i++) {
    	
    	//�ڼ� ī��Ʈ 
        count = 0;
        
        //i���ڰ� �Ѿ���� ����1�� number�� ���� 
        
        //�� => 356�̶� ���ڰ� i�� ���´� 
        //number���� ���ڿ��� 356�� ����ȴ�.
		//356���ڿ��� ���̸�ŭ �ٽ� �ݺ��Ѵ�. �� 3�� �ݺ�
		//number[j]�� ���� ������ �ڸ��� �����´�.
		//�׸��� ���ڸ��� ù��° �ݺ����� ù�ڸ��� 3,6,9�� ������ ī��Ʈ -> ù��°�ڸ� 3 -> ī��Ʈ1 
		//�ι�° �ݺ����� �ι�° �ڸ��� 3,6,9�� ������ ī��Ʈ -> �ι�°�ڸ� 5 -> ī��ƮX 
		//����° �ݺ����� ����° �ڸ��� 3,6,9�� ������ ī��Ʈ -> ����°�ڸ� 6 -> ī��Ʈ1
		//�� ī��Ʈ�� 2���Ǹ� �Ʒ� ���ǹ��� ���� �ڼ� 2���� ģ��. 
		
        sprintf(number, "%d", i);
        //strlen()�Լ� ���, ���ڿ��� ���� ��ȯ -> ���ڿ��� ���̸�ŭ �ݺ� 
        for (j = 0; j < strlen(number); j++) {
            char toChar = number[j];
            if (toChar == '3' || toChar == '6' || toChar == '9') {
                count++;
            }
        }
        if (count == 1) {
        	//0.5�ʰ� ����.
        	//�Ҹ���� 
        	Beep(DO,500);
            printf("¦!\n");
        } else if (count == 2) {
        	Beep(DO,500);
        	Beep(LE,500);
            printf("¦¦!\n");
        } else if (count == 3) {
        	Beep(DO,500);
        	Beep(LE,500);
        	Beep(ME,500);
            printf("¦¦¦!\n");
        } else {
        	//sleep �ҹ��� s�� �и������尡 �ƴϴ�. 
        	Sleep(500);
            printf("%d\n", i);
        }
    }
    return 0;
}

