#include <stdio.h>

int main() {
	
	//���� ���� 
	int directionX[] = { -1, 0, 1, 0 };
	int directionY[] = { 0, 1, 0, -1 };

	int x = 0;
	int y = 0;
	int i,j;
	//���� ���� ���� 
	int direction = 1;
	
	printf("���ڸ� �Է����ּ���.");
	int number;
	scanf("%d",&number);
	
	int numberArr[number][number];
	
	//2���� �迭 0���� �ʱ�ȭ 
	for (i = 0; i < number; i++) {
		for (j = 0; j < number; j++) {
			numberArr[i][j] = 0;
		}
	}
	
	int count = 0;
	//���־��� ���� 
	int keepGoing = 2;
	
	while(count < number*number*number) {
		
		count++;
		//���� ����
		int NX = x + directionX[direction];
		int NY = y + directionY[direction];
		//���ǹ� ���̰� 0���� ������ �ȵǰ� ���̺��� Ŀ���� �ȵǰ� ���� ��������� �ȵȴ�. 
		if (NX < 0 || NY < 0 || NX >= number || NY >= number || numberArr[NX][NY] >= 1) {
			//���� ��ȯ 
			direction = (direction + 1) % 4;
			//������ȯ�϶��� ���� ������ �ȵǹǷ� continue 
			continue;
		}
		//0,1�� �����ϹǷ� 0,0�� 1�� �����ϰ� ���� 
		numberArr[0][0] = 1;
		//0,1�� 1�� �߰��ϸ� �ݺ� ���� 
		numberArr[NX][NY] = keepGoing;
		keepGoing++;
			
		x = NX;
		y = NY;
	}
	
	//��� 
	for (i = 0; i < number; i++) {
		for (j = 0; j < number; j++) {
			printf("%d\t", numberArr[i][j]);
		}
		printf("\n");
		}
	}

