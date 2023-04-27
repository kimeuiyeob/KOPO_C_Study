package EuiYeobLandPlus;

import java.util.Scanner;

public class InputClass {

	private Scanner sc = null;
	private TextClass tc;

	public InputClass() {
		sc = new Scanner(System.in);
		tc = new TextClass();
	}

	public int chooseLanguage() {
		tc.chooseLan();
		int number = sc.nextInt();
		return number;
	}

//	=======================================================
	// 계속 티켓 구매
	public int keepBuyTicket() {
		int keeyBuyOrNot;
		while (true) {
			tc.keepBuyTicket();
			keeyBuyOrNot = sc.nextInt();
			if (keeyBuyOrNot > 2) {
				tc.inputAgain();
				continue;
			} else {
				return keeyBuyOrNot;
			}
		}
	}

//	=======================================================
	// 구매티켓 (주간인지 야간이지)
	public int ticketDayorNight() {
		int dayOrNight;
		while (true) {
			tc.chooseTypeTicket();
			dayOrNight = sc.nextInt();
			if (dayOrNight == 1) {
				dayOrNight = 1;
				break;
			} else if (dayOrNight == 2) {
				dayOrNight = 2;
				break;
			} else {
				tc.inputAgain();
			}
		}
		return dayOrNight;
	}

//	=======================================================
	// 구매한 티켓 갯수
	public int howManyOrderTicket() {
		int buyHowManyTicket;
		while (true) {
			tc.howManyBuyTicket();
			buyHowManyTicket = sc.nextInt();
			if (buyHowManyTicket < ConstValClass.MIN_COUNT || buyHowManyTicket > ConstValClass.MAX_COUNT) {
				tc.inputAgain();
				continue;
			}
			break;
		}
		return buyHowManyTicket;
	}

//	=======================================================
	// 우대사항 선택
	public int selectDiscount() {
		int forWeekPerson;
		while (true) {
			tc.chooseBenifitNumber();
			forWeekPerson = sc.nextInt();
			if (forWeekPerson >= 1 && forWeekPerson <= 5) {
				break;
			} else {
				tc.inputAgain();
			}
		}
		return forWeekPerson;
	};

//	=======================================================
	// 만나이 계산
	public String[] inputResidentNumber() {
		String[] residentNumber = new String[2];
		String residentNumber1;
		String residentNumber2;
		while (true) {
			tc.inputFrontIdNumber();
			residentNumber1 = sc.next();
			if (residentNumber1.length() != 6) {
				tc.inputAgain();
				continue;
			}
			break;
		}
		while (true) {
			tc.inputBackIdNumber();
			residentNumber2 = sc.next();
			if (residentNumber2.length() != 7) {
				tc.inputAgain();
				continue;
			}
			break;
		}
		residentNumber[0] = residentNumber1;
		residentNumber[1] = residentNumber2;
		return residentNumber;
//	=======================================================	

	}
}
