package EuiYeobLandCSV;

import java.util.Scanner;

public class InputClass {

	private Scanner sc = null;

	public InputClass() {
		sc = new Scanner(System.in);
	}

//	=======================================================
	// 계속 티켓 구매
	public int keepBuyTicket() {
		int keeyBuyOrNot;
		while (true) {
			System.out.println("계속 발권 진행 하시겠습니까?");
			System.out.println("1. 진행");
			System.out.println("2. 종료");
			keeyBuyOrNot = sc.nextInt();
			if (keeyBuyOrNot > 2) {
				System.err.println("1번~2번중 선택해주세요.");
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
			System.out.println("권종을 선택하세요.");
			System.out.println("1. 주간권");
			System.out.println("2. 야간권");
			dayOrNight = sc.nextInt();
			if (dayOrNight == 1) {
				System.out.println("주간권을 선택하셨습니다.");
				dayOrNight = 1;
				break;
			} else if (dayOrNight == 2) {
				System.out.println("야간권을 선택하셨습니다.");
				dayOrNight = 2;
				break;
			} else {
				System.err.println("1~2번중 선택해주세요.");
			}
		}
		return dayOrNight;
	}

//	=======================================================
	// 구매한 티켓 갯수
	public int howManyOrderTicket() {
		int buyHowManyTicket;
		while (true) {
			System.out.println("티켓을 몇개 주문하시겠습니까?");
			System.out.println("최소 1개 , 최대 10개 까지 구매 가능합니다.");
			buyHowManyTicket = sc.nextInt();
			if (buyHowManyTicket < ConstValClass.MIN_COUNT || buyHowManyTicket > ConstValClass.MAX_COUNT) {
				System.err.println("다시 입력해주세요.");
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
			System.out.println("우대사항을 선택해 주세요.");
			System.out.println("1. 없음");
			System.out.println("2. 장애인");
			System.out.println("3. 국가유공자");
			System.out.println("4. 다자녀");
			System.out.println("5. 임산부");
			forWeekPerson = sc.nextInt();
			if (forWeekPerson == 1) {
				System.out.println("1번 선택하셨습니다.");
				break;
			} else if (forWeekPerson == 2) {
				System.out.println("2번 선택하셨습니다.");
				break;
			} else if (forWeekPerson == 3) {
				System.out.println("3번 선택하셨습니다.");
				break;
			} else if (forWeekPerson == 4) {
				System.out.println("4번 선택하셨습니다.");
				break;
			} else if (forWeekPerson == 5) {
				System.out.println("5번 선택하셨습니다.");
				break;
			} else {
				System.err.println("1~5번중 선택해주세요.");
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
			System.out.println("주민등록버호 앞 6자리를 입력해주세요.");
			residentNumber1 = sc.next();
			if (residentNumber1.length() != 6) {
				System.err.println("다시 입력해주세요.");
				continue;
			}
			break;
		}
		while (true) {
			System.out.println("주민등록버호 뒤 7자리를 입력해주세요.");
			residentNumber2 = sc.next();
			if (residentNumber2.length() != 7) {
				System.err.println("다시 입력해주세요.");
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
