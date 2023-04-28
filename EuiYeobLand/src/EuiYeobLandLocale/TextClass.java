package EuiYeobLandLocale;

public class TextClass {
	
	public void startTicketing() {
		System.out.println("티켓 진행을 도와드리겠습니다.");
		System.out.println("1.티켓 구매를 원하십니까?");
		System.out.println("2.티켓 매출 분석표를 원하십니까?");
	}

	public void keepBuyTicket() {
		System.out.println(TanslateClass.KEEP_BUY_TICKET);
		System.out.println(TanslateClass.KEEP_BUY_TICKET_GOING);
		System.out.println(TanslateClass.KEEP_BUY_TICKET_STOP);
	}

	public void inputAgain() {
		System.err.println(TanslateClass.ENTER_AGAIN);
	}

	public void chooseTypeTicket() {
		System.out.println(TanslateClass.SELECT_TICKET_TYPE);
		System.out.println(TanslateClass.SELECT_TICKET_TYPE_DAY);
		System.out.println(TanslateClass.SELECT_TICKET_TYPE_NIGHT);

	}

	public void howManyBuyTicket() {
		System.out.println(TanslateClass.HOW_MANY_TICKET_BUY);
		System.out.println(TanslateClass.HOW_MANY_TICKET_BUY_MSG);

	}

	public void chooseBenifitNumber() {
		System.out.println(TanslateClass.CHOOSE_BENIFIT_NUMBER);
		System.out.println(TanslateClass.CHOOSE_BENIFIT_NUMBER_1);
		System.out.println(TanslateClass.CHOOSE_BENIFIT_NUMBER_2);
		System.out.println(TanslateClass.CHOOSE_BENIFIT_NUMBER_3);
		System.out.println(TanslateClass.CHOOSE_BENIFIT_NUMBER_4);
		System.out.println(TanslateClass.CHOOSE_BENIFIT_NUMBER_5);
	}

	public void inputFrontIdNumber() {
		System.out.println(TanslateClass.INPUT_FRONT_ID);

	}

	public void inputBackIdNumber() {
		System.out.println(TanslateClass.INPUT_BACK_ID);

	}

	public void printByeBye() {
		System.out.println(TanslateClass.EXIT_TICKET_PROGRAM);
	}

	public void printEuiYeobLand() {
		System.out.println(TanslateClass.EUIYEOBLAND);
	}

	public void printTotalPrice1() {
		System.out.print(TanslateClass.PRINT_TOTAL_PRICE_1);
	}

	public void printTotalPrice2() {
		System.out.println(TanslateClass.PRINT_TOTAL_PRICE_2);
	}

	public void printWon() {
		System.out.print(TanslateClass.PRINT_WON);
	}

	public void printWelcomeEuiYeobLand() {
		System.out.println(TanslateClass.PRINT_WELCOME_LAND);
	}

	public void _dayTicket() {
		System.out.print(TanslateClass.dayTicket);
	}

	public void _nightTicket() {
		System.out.print(TanslateClass.nightTicket);
	}

	public void printAdult() {
		System.out.print(TanslateClass.adult);
	}

	public void printTeen() {
		System.out.print(TanslateClass.teen);
	}

	public void printKid() {
		System.out.print(TanslateClass.kid);
	}

	public void printOldman() {
		System.out.print(TanslateClass.oldman);
	}

	public void printBaby() {
		System.out.print(TanslateClass.baby);
	}

	public void forNone() {
		System.out.println(TanslateClass.forNone);
	}

	public void forDisabled() {
		System.out.println(TanslateClass.forDisabled);
	}

	public void forMerities() {
		System.out.println(TanslateClass.forMerities);
	}

	public void forMultiChild() {
		System.out.println(TanslateClass.forMultiChild);
	}

	public void forPregnant() {
		System.out.println(TanslateClass.forPregnant);
	}

	public void chooseLan() {
		System.out.println("Choose your language");
		System.out.println("1. 한국어");
		System.out.println("2. English");
	}

	public void printEuiYeobLandReport() {
		System.out.println("================================ 의엽랜드 보고서 ===============================");
		System.out.println("날짜\t\t권종\t연령구분\t수량\t가격\t\t우대사항");
	}

	public void printEuiYeobLandTicketSell() {
		System.out.println("================================권종별 판매 현항================================");
	}

	public void printEuiYeobLandBenifitTicketStatus() {
		System.out.println("==============================우대권 판매 현황==================================");
	}

	public void printendLine() {
		System.out.println("============================================================================");
	}
	
	public void printOneDayPriceStatus() {
		System.out.println("==============================일자별 매출 현황==================================");
	}

	public void ticketDayTotalBuy() {
		System.out.print("주간권 총 티켓 구매수 : ");
	}

	public void ticketNightTotalBuy() {
		System.out.print("야간권 총 티켓 구매수 : ");
	}

	public void ticketDayNightTotalBuy() {
		System.out.print("총 판매 티켓수\t\t:\t\t");
	}

	public void _me() {
		System.out.println("\t매");
	}

	public void _baby() {
		System.out.print("유아 : ");
	}

	public void _Kid() {
		System.out.print(" 어린이 : ");
	}

	public void _teen() {
		System.out.print(" 청소년 : ");
	}

	public void _adult() {
		System.out.print(" 어른 : ");
	}

	public void _oldman() {
		System.out.print(" 노인 : ");
	}

	public void dayTotalPrice() {
		System.out.print("주간권 총 매출 : ");
	}

	public void nightTotalPrice() {
		System.out.print("야간권 총 매출 : ");
	}

	public void nonBenifit() {
		System.out.print("우 대   없 음\t\t:\t\t");
	}

	public void disableBenifit() {
		System.out.print("장애인 우대사항\t\t:\t\t");
	}

	public void meritBenifit() {
		System.out.print("유공자 우대사항\t\t:\t\t");
	}

	public void manyChildBenifit() {
		System.out.print("다자녀 우대사항\t\t:\t\t");
	}

	public void pregnantBenifit() {
		System.out.print("임산부 우대사항\t\t:\t\t");
	}

}
