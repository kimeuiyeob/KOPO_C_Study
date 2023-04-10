#include <stdio.h>

int main() {
	
	const double USDrate = 1317.00;
	const double JPYrate = 9.96;
	const double EURrate = 1439.09;
	const double CNYrate = 191.93;
	const double GBPrate = 1638.55;
	
	printf("환전을 원하는 금액을 입력하세요.\n");
	int exChangeMoney = 0;
	scanf("%d",&exChangeMoney);
	printf("환전 하실 금액은 %d 원 입니다.\n",exChangeMoney);
	
	int i = 0;
	while(i < 2) {
		
		printf("환전할 외화를 선택하세요.\n");
		printf("1 : USD\n");
		printf("2 : JPY\n");
		printf("3 : EUR\n");
		printf("4 : CNY\n");
		printf("5 : GBP\n");
		printf("6 : 종료\n");
		
		int chooseNumber;
		scanf("%d",&chooseNumber);
		
		if(chooseNumber == 1) {
			printf("USD 환전해 드리겠습니다.\n");
			printf("기준 환율 : %lf\n" , USDrate);
			printf("환전 결과\n");
			int dollar = (int)(exChangeMoney / USDrate);
			printf("USD : %d 달러\n", dollar);
			int change = (int)(exChangeMoney - dollar * USDrate);
			printf("거스름돈 : %d 원입니다.\n", change);
			break;
			
		}else if(chooseNumber == 2) {
			printf("JPY 환전해 드리겠습니다.\n");
			printf("기준 환율 : %lf\n",JPYrate);
			printf("환전 결과\n");
			int japan = (int)(exChangeMoney / JPYrate);
			printf("JYP : %d 옌\n", japan);
			int change = (int)(exChangeMoney - japan * JPYrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			break;
			
		}else if(chooseNumber == 3) {
			printf("EUR 환전해 드리겠습니다.\n");
			printf("기준 환율 : %lf\n",EURrate);
			int eur = (int)(exChangeMoney / EURrate);
			printf("EUR : %d 유로\n", eur);
			int change = (int)(exChangeMoney - eur * EURrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			break;
			
		}else if(chooseNumber == 4) {
			printf("CNY 환전해 드리겠습니다.\n");
			printf("기준 환율 : %lf\n",CNYrate);
			int cny = (int)(exChangeMoney / CNYrate);
			printf("CNY : %d 위안\n", cny);
			int change = (int)(exChangeMoney - cny * CNYrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			break;
			
		}else if(chooseNumber == 5) {
			printf("GBP 환전해 드리겠습니다.\n");
			printf("기준 환율 : %lf\n",GBPrate);
			int gbp = (int)(exChangeMoney / GBPrate);
			printf("GBP : %d 파운드\n", gbp);
			int change = (int)(exChangeMoney - gbp * GBPrate);
			printf("거스름돈 : %d 원입니다.\n", change -change%10);
			break;
			
		}else if(chooseNumber == 6) {
			printf("안녕히 가세요~");
			break;
		}else {
			printf("1~6번중 골라주세요.");
		} 
		
	} 
	
	
} 
