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
	
	printf("환전을 원하는 금액을 입력하세요.\n");
	int exChangeMoney = 0;
	scanf("%d",&exChangeMoney);
	printf("환전 하실 금액은 %d 원 입니다.\n",exChangeMoney);
	
	printf("환전할 외화를 선택하세요.\n");
	printf("1 : USD\n");
	printf("2 : JPY\n");
	printf("3 : EUR\n");
	printf("4 : CNY\n");
	printf("5 : GBP\n");
		
	int chooseNumber;
	scanf("%d",&chooseNumber);
	
	do {
		
		if(chooseNumber == 1) {
			
			printf("USD 환전해 드리겠습니다.\n");
			float USDrate = getExchangeRate(chooseNumber);
			printf("기준 환율 : %f\n", USDrate);
			printf("환전 결과\n");
			int dollar = (int)(exChangeMoney / USDrate);
			printf("USD : %d 달러\n", dollar);
			int change = (int)(exChangeMoney - dollar * USDrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000원:%d , 500원:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
			
		}else if(chooseNumber == 2) {
			printf("JPY 환전해 드리겠습니다.\n");
			float JPYrate = getExchangeRate(chooseNumber);
			printf("기준 환율 : %lf\n",JPYrate);
			printf("환전 결과\n");
			int japan = (int)(exChangeMoney / JPYrate);
			printf("JYP : %d 옌\n", japan);
			int change = (int)(exChangeMoney - japan * JPYrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000원:%d , 500원:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
		}else if(chooseNumber == 3) {
			printf("EUR 환전해 드리겠습니다.\n");
			float EURrate = getExchangeRate(chooseNumber);
			printf("기준 환율 : %lf\n",EURrate);
			int eur = (int)(exChangeMoney / EURrate);
			printf("EUR : %d 유로\n", eur);
			int change = (int)(exChangeMoney - eur * EURrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000원:%d , 500원:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
		}else if(chooseNumber == 4) {
			printf("CNY 환전해 드리겠습니다.\n");
			float CNYrate = getExchangeRate(chooseNumber);
			printf("기준 환율 : %lf\n",CNYrate);
			int cny = (int)(exChangeMoney / CNYrate);
			printf("CNY : %d 위안\n", cny);
			int change = (int)(exChangeMoney - cny * CNYrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000원:%d , 500원:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
		}else if(chooseNumber == 5) {
			printf("GBP 환전해 드리겠습니다.\n");
			float GBPrate = getExchangeRate(chooseNumber);
			printf("기준 환율 : %lf\n",GBPrate);
			int gbp = (int)(exChangeMoney / GBPrate);
			printf("GBP : %d 파운드\n", gbp);
			int change = (int)(exChangeMoney - gbp * GBPrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			int changeMoney = change - change % 10;
			
			int Money1000Won = 0;
			int Money500Won = 0;
			int Money100Won = 0;
			int Money10Won = 0;

			Money1000Won = changeMoney / 1000;
			Money500Won = (changeMoney % 1000) / 500;
			Money100Won = (changeMoney % 500) / 100;
			Money10Won = (changeMoney % 100) / 10;
			
			printf("1000원:%d , 500원:%d , 1000:%d , 10:%d ," , Money1000Won , Money500Won, Money100Won , Money10Won);
			break;
			
		}
		
	} while (chooseNumber <= 1 || chooseNumber >= 5);

}
