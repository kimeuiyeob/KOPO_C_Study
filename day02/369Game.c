#include <stdio.h>
#include <string.h>

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
            printf("¦! ");
        } else if (count == 2) {
            printf("¦¦! ");
        } else if (count == 3) {
            printf("¦¦¦! ");
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}
