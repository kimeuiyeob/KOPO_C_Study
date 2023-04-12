#include <stdio.h>

int main() {
	
	//방향 지정 
	int directionX[] = { -1, 0, 1, 0 };
	int directionY[] = { 0, 1, 0, -1 };

	int x = 0;
	int y = 0;
	int i,j;
	//방향 설정 변수 
	int direction = 1;
	
	printf("숫자를 입력해주세요.");
	int number;
	scanf("%d",&number);
	
	int numberArr[number][number];
	
	//2차원 배열 0으로 초기화 
	for (i = 0; i < number; i++) {
		for (j = 0; j < number; j++) {
			numberArr[i][j] = 0;
		}
	}
	
	int count = 0;
	//값넣어줄 변수 
	int keepGoing = 2;
	
	while(count < number*number*number) {
		
		count++;
		//방향 설정
		int NX = x + directionX[direction];
		int NY = y + directionY[direction];
		//조건문 길이가 0보다 작으면 안되고 길이보다 커지면 안되고 값이 들어있으면 안된다. 
		if (NX < 0 || NY < 0 || NX >= number || NY >= number || numberArr[NX][NY] >= 1) {
			//방향 전환 
			direction = (direction + 1) % 4;
			//방향전환일때는 값을 담으면 안되므로 continue 
			continue;
		}
		//0,1로 시작하므로 0,0에 1을 대입하고 시작 
		numberArr[0][0] = 1;
		//0,1에 1씩 추가하며 반복 진행 
		numberArr[NX][NY] = keepGoing;
		keepGoing++;
			
		x = NX;
		y = NY;
	}
	
	//출력 
	for (i = 0; i < number; i++) {
		for (j = 0; j < number; j++) {
			printf("%d\t", numberArr[i][j]);
		}
		printf("\n");
		}
	}

