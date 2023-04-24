package EuiYeobLand;

public class TanslateClass {

	private static int LANGUAGE;

	public static int getLANGUAGE() {
		return LANGUAGE;
	}

	public static void setLANGUAGE(int lANGUAGE) {
		LANGUAGE = lANGUAGE;
	}

//	==========================================================================

	public static String KEEP_BUY_TICKET;
	public static String KEEP_BUY_TICKET_GOING;
	public static String KEEP_BUY_TICKET_STOP;

	public static String ENTER_AGAIN;

	public static String SELECT_TICKET_TYPE;
	public static String SELECT_TICKET_TYPE_DAY;
	public static String SELECT_TICKET_TYPE_NIGHT;

	public static String HOW_MANY_TICKET_BUY;
	public static String HOW_MANY_TICKET_BUY_MSG;

	public static String CHOOSE_BENIFIT_NUMBER;
	public static String CHOOSE_BENIFIT_NUMBER_1;
	public static String CHOOSE_BENIFIT_NUMBER_2;
	public static String CHOOSE_BENIFIT_NUMBER_3;
	public static String CHOOSE_BENIFIT_NUMBER_4;
	public static String CHOOSE_BENIFIT_NUMBER_5;

	public static String INPUT_FRONT_ID;
	public static String INPUT_BACK_ID;

	public static String EXIT_TICKET_PROGRAM;
	public static String EUIYEOBLAND;

	public static String PRINT_TOTAL_PRICE_1;
	public static String PRINT_TOTAL_PRICE_2;

	public static String PRINT_WON;
	public static String PRINT_WELCOME_LAND;

	public static String PRINT_WELCOME_LAND_REPORT;
	public static String PRINT_WELCOME_LAND_REPORT_KINDS;
	public static String PRINT_EUIYEOB_LAND_TICKET_SELL;
	public static String PRINT_EUIYEOB_LAND_BENIFIT_TICKET_STATUS;

	public static String TICKET_DAY_TOTAL_BUY;
	public static String TICKET_NIGHT_TOTAL_BUY;
	public static String TICKET_DAY_NIGHT_TOTAL_BUY;
	public static String TICKETS;

	public static String BABY;
	public static String KID;
	public static String TEEN;
	public static String ADULT;
	public static String OLDMAN;

	public static String DAY_TOTAL_PRICE;
	public static String NIGHT_TOTAL_PRICE;

	public static String NON_BENIFIT;
	public static String DISABLE_BENIFIT;
	public static String MERIT_BENIFIT;
	public static String MANYCHILD_BENIFIT;
	public static String PREGNANT_BENIFIT;

	public static void translateMSG() {

		if (LANGUAGE == 1) {
			KEEP_BUY_TICKET = "계속 발권 진행 하시겠습니까?";
			KEEP_BUY_TICKET_GOING = "1. 진행";
			KEEP_BUY_TICKET_STOP = "2. 종료";

			ENTER_AGAIN = "다시 입력해주세요.";

			SELECT_TICKET_TYPE = "권종을 선택하세요.";
			SELECT_TICKET_TYPE_DAY = "1. 주간권";
			SELECT_TICKET_TYPE_NIGHT = "2. 야간권";

			HOW_MANY_TICKET_BUY = "티켓을 몇개 주문하시겠습니까?";
			HOW_MANY_TICKET_BUY_MSG = "최소 1개 , 최대 10개 까지 구매 가능합니다.";

			CHOOSE_BENIFIT_NUMBER = "우대사항을 선택해 주세요.";
			CHOOSE_BENIFIT_NUMBER_1 = "1. 없음";
			CHOOSE_BENIFIT_NUMBER_2 = "2. 장애인";
			CHOOSE_BENIFIT_NUMBER_3 = "3. 국가유공자";
			CHOOSE_BENIFIT_NUMBER_4 = "4. 다자녀";
			CHOOSE_BENIFIT_NUMBER_5 = "5. 임산부";

			INPUT_FRONT_ID = "주민등록버호 앞 6자리를 입력해주세요.";
			INPUT_BACK_ID = "주민등록버호 뒤 7자리를 입력해주세요.";

			EXIT_TICKET_PROGRAM = "티켓 발권을 종료합니다. 감사합니다.";
			EUIYEOBLAND = "\t\t\t\t의엽랜드";
			PRINT_TOTAL_PRICE_1 = "입장료 총 금액은 ";
			PRINT_TOTAL_PRICE_2 = "원 입니다.";
			PRINT_WON = "원";

			PRINT_WELCOME_LAND = "\t\t\t의엽 랜드에 오신걸 환영합니다.";
			PRINT_WELCOME_LAND_REPORT = "================================ 의엽랜드 보고서 ===============================";
			PRINT_WELCOME_LAND_REPORT_KINDS = "날짜\t\t권종\t연령구분\t수량\t가격\t\t우대사항";
			PRINT_EUIYEOB_LAND_TICKET_SELL = "================================권종별 판매 현항================================";
			PRINT_EUIYEOB_LAND_BENIFIT_TICKET_STATUS = "==============================우대권 판매 현황==================================";

			TICKET_DAY_TOTAL_BUY = "주간권 총 티켓 구매수 : ";
			TICKET_NIGHT_TOTAL_BUY = "야간권 총 티켓 구매수 : ";
			TICKET_DAY_NIGHT_TOTAL_BUY = "총 판매 티켓수\t\t:\t\t";
			TICKETS = "\t매";

			BABY = "유아 : ";
			KID = " 어린이 : ";
			TEEN = " 청소년 : ";
			ADULT = " 어른 : ";
			OLDMAN = " 노인 : ";

			DAY_TOTAL_PRICE = "주간권 총 매출 : ";
			NIGHT_TOTAL_PRICE = "야간권 총 매출 : ";
			NON_BENIFIT = "우 대   없 음\t\t:\t\t";
			DISABLE_BENIFIT = "장애인 우대사항\t\t:\t\t";
			MERIT_BENIFIT = "유공자 우대사항\t\t:\t\t";
			MANYCHILD_BENIFIT = "다자녀 우대사항\t\t:\t\t";
			PREGNANT_BENIFIT = "임산부 우대사항\t\t:\t\t";

		} else if (LANGUAGE == 2) {
			KEEP_BUY_TICKET = "Would you like to proceed with ticketing?";
			KEEP_BUY_TICKET_GOING = "1. Progress";
			KEEP_BUY_TICKET_STOP = "2. Exit";

			ENTER_AGAIN = "Please enter again.";

			SELECT_TICKET_TYPE = "Please select a ticket type.";
			SELECT_TICKET_TYPE_DAY = "1. Day ticket";
			SELECT_TICKET_TYPE_NIGHT = "2. Night ticket";

			HOW_MANY_TICKET_BUY = "How many tickets would you like to order?";
			HOW_MANY_TICKET_BUY_MSG = "You can purchase a minimum of 1 and a maximum of 10.";

			CHOOSE_BENIFIT_NUMBER = "Please select a preference.";
			CHOOSE_BENIFIT_NUMBER_1 = "1. Doesn't exist";
			CHOOSE_BENIFIT_NUMBER_2 = "2. Disabled";
			CHOOSE_BENIFIT_NUMBER_3 = "3. National merit";
			CHOOSE_BENIFIT_NUMBER_4 = "4. Multiple children";
			CHOOSE_BENIFIT_NUMBER_5 = "5. Pregnant woman";

			INPUT_FRONT_ID = "Please enter the first 6 digits of your resident registration number.";
			INPUT_BACK_ID = "Please enter the last 7 digits of your resident registration number.";

			EXIT_TICKET_PROGRAM = "End ticket issuance. thank you";
			EUIYEOBLAND = "\t\t\t\tEUIYEOB LAND";
			PRINT_TOTAL_PRICE_1 = "Total entrance fee ";
			PRINT_TOTAL_PRICE_2 = "Won";
			PRINT_WON = "Won";

			PRINT_WELCOME_LAND = "\t\t\tWelcome to EUIYEOB LAND";

//			PRINT_WELCOME_LAND_REPORT = "============================ EuiYeob Land Report ===========================";
//			PRINT_WELCOME_LAND_REPORT_KINDS = "Date\t\tKinds\tAge\tQuan\tPrice\t\tPrefer Treatment";
//			PRINT_EUIYEOB_LAND_TICKET_SELL = "======================== Sales Status by Ticket Type =======================";
//			PRINT_EUIYEOB_LAND_BENIFIT_TICKET_STATUS = "============== Current Status of Preferential Ticket Sales =================";
//
//			TICKET_DAY_TOTAL_BUY = "Total number of weekly ticket purchases : ";
//			TICKET_NIGHT_TOTAL_BUY = "Total number of night ticket purchases : ";
//			TICKET_DAY_NIGHT_TOTAL_BUY = "Total number of tickets sold : ";
//			TICKETS = "\ttickets";
//
//			BABY = "Baby : ";
//			KID = "Kid : ";
//			TEEN = "Teen : ";
//			ADULT = "Adult : ";
//			OLDMAN = "OldMan : ";
//
//			DAY_TOTAL_PRICE = "Total weekly ticket sales :";
//			NIGHT_TOTAL_PRICE = "Total night ticket sales :";
//			NON_BENIFIT = "No preferential treatment : ";
//			DISABLE_BENIFIT = "Preference for the disabled : ";
//			MERIT_BENIFIT = "Preference for meritorious : ";
//			MANYCHILD_BENIFIT = "Preference for multiple children : ";
//			PREGNANT_BENIFIT = "Preference for pregnant women : ";

//			==========================================================================================================

			PRINT_WELCOME_LAND_REPORT = "================================ 의엽랜드 보고서 ===============================";
			PRINT_WELCOME_LAND_REPORT_KINDS = "날짜\t\t권종\t연령구분\t수량\t가격\t\t우대사항";
			PRINT_EUIYEOB_LAND_TICKET_SELL = "================================권종별 판매 현항================================";
			PRINT_EUIYEOB_LAND_BENIFIT_TICKET_STATUS = "==============================우대권 판매 현황==================================";

			TICKET_DAY_TOTAL_BUY = "주간권 총 티켓 구매수 : ";
			TICKET_NIGHT_TOTAL_BUY = "야간권 총 티켓 구매수 : ";
			TICKET_DAY_NIGHT_TOTAL_BUY = "총 판매 티켓수\t\t:\t\t";
			TICKETS = "\t매";

			BABY = "유아 : ";
			KID = " 어린이 : ";
			TEEN = " 청소년 : ";
			ADULT = " 어른 : ";
			OLDMAN = " 노인 : ";

			DAY_TOTAL_PRICE = "주간권 총 매출 : ";
			NIGHT_TOTAL_PRICE = "야간권 총 매출 : ";
			NON_BENIFIT = "우 대   없 음\t\t:\t\t";
			DISABLE_BENIFIT = "장애인 우대사항\t\t:\t\t";
			MERIT_BENIFIT = "유공자 우대사항\t\t:\t\t";
			MANYCHILD_BENIFIT = "다자녀 우대사항\t\t:\t\t";
			PREGNANT_BENIFIT = "임산부 우대사항\t\t:\t\t";

		}

	}

}
