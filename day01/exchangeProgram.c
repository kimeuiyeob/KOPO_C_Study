#include <stdio.h>

	static float getExchangeRate(int mode) {
	const float USDRATE = 1317.00;
	const float JPYRATE = 9.96;
	const float EURRATE = 1439.09;
	const float CNYRATE = 191.93;
	const float GBPRATE = 1638.55;	
		if(mode == 1) {
			return  USDRATE;
		}else if(mode == 2) {
			return JPYRATE;
		}else if(mode == 3) {
			return EURRATE;
		}else if(mode == 4) {
			return CNYRATE;
		}else if(mode == 5) {
			return  GBPRATE;
		}
		return 0;
	}
	
int main() {
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���.\n");
	int exChangeMoney = 0;
	scanf("%d",&exChangeMoney);
	printf("ȯ�� �Ͻ� �ݾ��� %d �� �Դϴ�.\n",exChangeMoney);
	
	printf("ȯ���� ��ȭ�� �����ϼ���.\n");
	printf("1 : USD\n");
	printf("2 : JPY\n");
	printf("3 : EUR\n");
	printf("4 : CNY\n");
	printf("5 : GBP\n");
		
	int chooseNumber;
	scanf("%d",&chooseNumber);
	
	do {
		
		if(chooseNumber == 1) {
			
			printf("USD ȯ���� �帮�ڽ��ϴ�.\n");
			float USDrate = getExchangeRate(chooseNumber);
			printf("���� ȯ�� : %f\n", USDrate);
			printf("ȯ�� ���\n");
			int dollar = (int)(exChangeMoney / USDrate);
			printf("USD : %d �޷�\n", dollar);
			int change = (int)(exChangeMoney - dollar * USDrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000��:%d , 500��:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
			
		}else if(chooseNumber == 2) {
			printf("JPY ȯ���� �帮�ڽ��ϴ�.\n");
			float JPYrate = getExchangeRate(chooseNumber);
			printf("���� ȯ�� : %lf\n",JPYrate);
			printf("ȯ�� ���\n");
			int japan = (int)(exChangeMoney / JPYrate);
			printf("JYP : %d ��\n", japan);
			int change = (int)(exChangeMoney - japan * JPYrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000��:%d , 500��:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
		}else if(chooseNumber == 3) {
			printf("EUR ȯ���� �帮�ڽ��ϴ�.\n");
			float EURrate = getExchangeRate(chooseNumber);
			printf("���� ȯ�� : %lf\n",EURrate);
			int eur = (int)(exChangeMoney / EURrate);
			printf("EUR : %d ����\n", eur);
			int change = (int)(exChangeMoney - eur * EURrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000��:%d , 500��:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
		}else if(chooseNumber == 4) {
			printf("CNY ȯ���� �帮�ڽ��ϴ�.\n");
			float CNYrate = getExchangeRate(chooseNumber);
			printf("���� ȯ�� : %lf\n",CNYrate);
			int cny = (int)(exChangeMoney / CNYrate);
			printf("CNY : %d ����\n", cny);
			int change = (int)(exChangeMoney - cny * CNYrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000��:%d , 500��:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
		}else if(chooseNumber == 5) {
			printf("GBP ȯ���� �帮�ڽ��ϴ�.\n");
			float GBPrate = getExchangeRate(chooseNumber);
			printf("���� ȯ�� : %lf\n",GBPrate);
			int gbp = (int)(exChangeMoney / GBPrate);
			printf("GBP : %d �Ŀ��\n", gbp);
			int change = (int)(exChangeMoney - gbp * GBPrate);
			printf("�Ž����� : %d ���Դϴ�.\n", change -change%10);
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000��:%d , 500��:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
		}
		
	} while (chooseNumber <= 1 || chooseNumber >= 5);

}
