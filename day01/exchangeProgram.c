#include <stdio.h>

int main() {
	
	const double USDrate = 1317.00;
	const double JPYrate = 9.96;
	const double EURrate = 1439.09;
	const double CNYrate = 191.93;
	const double GBPrate = 1638.55;
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���.\n");
	int exChangeMoney = 0;
	scanf("%d",&exChangeMoney);
	printf("ȯ�� �Ͻ� �ݾ��� %d �� �Դϴ�.\n",exChangeMoney);
	
	int i = 0;
	while(i < 2) {
		
		printf("ȯ���� ��ȭ�� �����ϼ���.\n");
		printf("1 : USD\n");
		printf("2 : JPY\n");
		printf("3 : EUR\n");
		printf("4 : CNY\n");
		printf("5 : GBP\n");
		printf("6 : ����\n");
		
		int chooseNumber;
		scanf("%d",&chooseNumber);
		
		if(chooseNumber == 1) {
			printf("USD ȯ���� �帮�ڽ��ϴ�.\n");
			printf("���� ȯ�� : %lf\n" , USDrate);
			printf("ȯ�� ���\n");
			int dollar = (int)(exChangeMoney / USDrate);
			printf("USD : %d �޷�\n", dollar);
			int change = (int)(exChangeMoney - dollar * USDrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change);
			break;
			
		}else if(chooseNumber == 2) {
			printf("JPY ȯ���� �帮�ڽ��ϴ�.\n");
			printf("���� ȯ�� : %lf\n",JPYrate);
			printf("ȯ�� ���\n");
			int japan = (int)(exChangeMoney / JPYrate);
			printf("JYP : %d ��\n", japan);
			int change = (int)(exChangeMoney - japan * JPYrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			break;
			
		}else if(chooseNumber == 3) {
			printf("EUR ȯ���� �帮�ڽ��ϴ�.\n");
			printf("���� ȯ�� : %lf\n",EURrate);
			int eur = (int)(exChangeMoney / EURrate);
			printf("EUR : %d ����\n", eur);
			int change = (int)(exChangeMoney - eur * EURrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			break;
			
		}else if(chooseNumber == 4) {
			printf("CNY ȯ���� �帮�ڽ��ϴ�.\n");
			printf("���� ȯ�� : %lf\n",CNYrate);
			int cny = (int)(exChangeMoney / CNYrate);
			printf("CNY : %d ����\n", cny);
			int change = (int)(exChangeMoney - cny * CNYrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			break;
			
		}else if(chooseNumber == 5) {
			printf("GBP ȯ���� �帮�ڽ��ϴ�.\n");
			printf("���� ȯ�� : %lf\n",GBPrate);
			int gbp = (int)(exChangeMoney / GBPrate);
			printf("GBP : %d �Ŀ��\n", gbp);
			int change = (int)(exChangeMoney - gbp * GBPrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			break;
			
		}else if(chooseNumber == 6) {
			printf("�ȳ��� ������~");
			break;
		}else {
			printf("1~6���� ����ּ���.");
		} 
		
	} 
	
	
} 
