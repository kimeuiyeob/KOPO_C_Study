package EuiYeobLandPlus;

public class TanslateClass {

	private static int LANGUAGE = 2;

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
	public static String dayTicket;
	public static String nightTicket;
	public static String adult;
	public static String teen;
	public static String kid;
	public static String oldman;
	public static String baby;
	public static String forNone;
	public static String forDisabled;
	public static String forMerities;
	public static String forMultiChild;
	public static String forPregnant;

	public static void translateMSG(String country) {

		if (country.equals("KR")) {

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
			dayTicket = "주간권\t";
			nightTicket = "야간권\t";
			adult = "어른\t";
			teen = "청소년\t";
			kid = "어린이\t";
			oldman = "노인\t";
			baby = "아이\t";
			forNone = "\t 없음";
			forDisabled = "\t 장애인 우대사항 적용";
			forMerities = "\t 유공자 우대사항 적용";
			forMultiChild = "\t 다자녀 우대사항 적용";
			forPregnant = "\t 임산부 우대사항 적용";

		} else if (country.equals("US")) {

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
			dayTicket = "day ticket\t";
			nightTicket = "night ticket\t";
			adult = "Adult\t";
			teen = "Teen\t";
			kid = "Kid\t";
			oldman = "Oldman\t";
			baby = "Baby\t";
			forNone = "\t Doesn't exist";
			forDisabled = "\t Treatment for the disabled";
			forMerities = "\t Treatment for persons of merit";
			forMultiChild = "\t Multiple child preference applied";
			forPregnant = "\t Treatment for pregnant women";

		}

	}
}
