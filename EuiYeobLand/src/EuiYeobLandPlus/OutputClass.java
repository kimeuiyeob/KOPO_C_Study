package EuiYeobLandPlus;

import java.text.DecimalFormat;

public class OutputClass extends Thread {

	private CalculateClass cal;
	private DecimalFormat df;
	private TextClass sc;

	public OutputClass() {
		cal = new CalculateClass();
		df = new DecimalFormat("###,###,###");
		sc = new TextClass();
	}

	// 티켓 구매 종료 출력
	public void printResult() throws InterruptedException {
		OrderListSaveClass orderListSaveClass = new OrderListSaveClass();
		int resultPriceSum = 0;
		sc.printByeBye();
		if (cal.getOrderClassList().size() >= 1) {
			for (int i = 0; i < 76; i++) {
				Thread.sleep(5);
				System.err.print("=");
			}
			System.out.println();
			sc.printEuiYeobLand();
			for (int i = 0; i < 76; i++) {
				Thread.sleep(5);
				System.err.print("=");
			}
			System.out.println();

			// ======================================================================================================
			// 출력
			for (int i = 0; i < cal.getOrderClassList().size(); i++) {

				if (cal.getOrderClassList().get(i).getDayOrNight() == 1) {
					sc._dayTicket();
				} else if (cal.getOrderClassList().get(i).getDayOrNight() == 2) {
					sc._nightTicket();
				}

				if (cal.getOrderClassList().get(i).getAdultOrChild() == 1) {
					sc.printAdult();
				} else if (cal.getOrderClassList().get(i).getAdultOrChild() == 2) {
					sc.printTeen();
				} else if (cal.getOrderClassList().get(i).getAdultOrChild() == 3) {
					sc.printKid();
				} else if (cal.getOrderClassList().get(i).getAdultOrChild() == 4) {
					sc.printOldman();
				} else if (cal.getOrderClassList().get(i).getAdultOrChild() == 5) {
					sc.printBaby();
				}

				System.out.print(cal.getOrderClassList().get(i).getHowManyTickets() + "\t");
				System.out.print(df.format(cal.getOrderClassList().get(i).getTotalPrice()));
				sc.printWon();

				if (cal.getOrderClassList().get(i).getBenefitNumber() == 1) {
					sc.forNone();
				} else if (cal.getOrderClassList().get(i).getBenefitNumber() == 2) {
					sc.forDisabled();
				} else if (cal.getOrderClassList().get(i).getBenefitNumber() == 3) {
					sc.forMerities();
				} else if (cal.getOrderClassList().get(i).getBenefitNumber() == 4) {
					sc.forMultiChild();
				} else if (cal.getOrderClassList().get(i).getBenefitNumber() == 5) {
					sc.forPregnant();
				}

				resultPriceSum += cal.getOrderClassList().get(i).getTotalPrice();
			}
		}
		sc.printTotalPrice1();
		System.out.print(df.format(resultPriceSum));
		sc.printTotalPrice2();

		// CSV저장
		orderListSaveClass.orderListSaving();
		// ======================================================================================================

		for (int i = 0; i < 76; i++) {
			Thread.sleep(5);
			System.err.print("=");
		}
		System.out.println();
	}

	// 헤더 출력
	public void printHeadLineTop() throws InterruptedException {
		for (int i = 0; i < 76; i++) {
			Thread.sleep(5);
			System.err.print("=");
		}
		System.out.println();
		sc.printWelcomeEuiYeobLand();
		for (int i = 0; i < 76; i++) {
			Thread.sleep(5);
			System.err.print("=");
		}
		System.out.println();
	}

//	===================================================================================

	// 전체 CSV 파일 읽기
	public void getTotalCSVReport() {

		OrderListSaveClass orderListSaveClass = new OrderListSaveClass();
		sc.printEuiYeobLandReport();
		for (int i = 0; i < orderListSaveClass.getCsvList().size(); i++) {
			System.out.print(orderListSaveClass.getCsvList().get(i).get(0) + "\t"); // 날짜
			System.out.print(orderListSaveClass.getCsvList().get(i).get(1) + "\t"); // 권종
			System.out.print(orderListSaveClass.getCsvList().get(i).get(2) + "\t"); // 연령구분
			System.out.print(orderListSaveClass.getCsvList().get(i).get(3) + "\t"); // 수량
			System.out.print(df.format(Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4))) + "\t\t"); // 가격
			System.out.print(orderListSaveClass.getCsvList().get(i).get(5)); // 우대사항
			System.out.println();
		}
		sc.printendLine();
	}

//	===================================================================================

	public void getDayOrNightTotalTickets() {
		sc.printEuiYeobLandTicketSell();
		getReportDayTickets();// 주간 티켓 구매율
		System.out.println();
		getReportNightTickets(); // 야간 티켓 구매율
		sc.printendLine();
	}

//	===================================================================================
	// 주간권 티켓 구매율
	public void getReportDayTickets() {

		OrderListSaveClass orderListSaveClass = new OrderListSaveClass();

		int countDayTickets = 0;
		int baby = 0; // 아이
		int kid = 0; // 어린이
		int teen = 0; // 청소년
		int adult = 0; // 어른
		int oldman = 0; // 노인
		int totalPrice = 0;

		for (int i = 0; i < orderListSaveClass.getCsvList().size(); i++) {
			if (orderListSaveClass.getCsvList().get(i).get(1).equals("주간권")) {
				countDayTickets++;
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("아이")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					baby++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("어린이")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					kid++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("청소년")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					teen++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("어른")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					adult++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("노인")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					oldman++;
				}
			}
		}
		sc.ticketDayTotalBuy();
		System.out.println(countDayTickets);

		sc._baby();
		System.out.print(baby);
		sc._Kid();
		System.out.print(kid);
		sc._teen();
		System.out.print(teen);
		sc._adult();
		System.out.print(adult);
		sc._oldman();
		System.out.println(oldman);

		sc.dayTotalPrice();
		System.out.print(df.format(totalPrice));
	}

//	===================================================================================
	// 야간권 티켓 구매율
	public void getReportNightTickets() {

		OrderListSaveClass orderListSaveClass = new OrderListSaveClass();
		int countDayTickets = 0;
		int baby = 0; // 아이
		int kid = 0; // 어린이
		int teen = 0; // 청소년
		int adult = 0; // 어른
		int oldman = 0; // 노인
		int totalPrice = 0;

		for (int i = 0; i < orderListSaveClass.getCsvList().size(); i++) {
			if (orderListSaveClass.getCsvList().get(i).get(1).equals("야간권")) {
				countDayTickets++;
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("아이")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					baby++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("어린이")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					kid++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("청소년")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					teen++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("어른")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					adult++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).equals("노인")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					oldman++;
				}
			}
		}

		sc.ticketNightTotalBuy();
		System.out.println(countDayTickets);

		sc._baby();
		System.out.print(baby);
		sc._Kid();
		System.out.print(kid);
		sc._teen();
		System.out.print(teen);
		sc._adult();
		System.out.print(adult);
		sc._oldman();
		System.out.println(oldman);

		sc.nightTotalPrice();
		System.out.print(df.format(totalPrice));
		System.out.println();

	}

//	===================================================================================
	// 총 우대별 구매 티켓 갯수
	public void getReportBenifitStatus() {
		OrderListSaveClass orderListSaveClass = new OrderListSaveClass();

		int totalBenifitstatus = 0; // 전체
		int numberOne = 0; // 우대사항 없음
		int numberTwo = 0; // 장애인 우대사항
		int numberThree = 0; // 유공자 우대사항
		int numberFour = 0; // 다자녀 우대사항
		int numberFive = 0; // 임산부 우대사항

		for (int i = 0; i < orderListSaveClass.getCsvList().size(); i++) {
			if (orderListSaveClass.getCsvList().get(i).get(5).equals("우대 사항 없음")) {
				totalBenifitstatus++;
				numberOne++;
			}
			if (orderListSaveClass.getCsvList().get(i).get(5).equals("장애인 우대사항 적용")) {
				totalBenifitstatus++;
				numberTwo++;
			}
			if (orderListSaveClass.getCsvList().get(i).get(5).equals("유공자 우대사항 적용")) {
				totalBenifitstatus++;
				numberThree++;
			}
			if (orderListSaveClass.getCsvList().get(i).get(5).equals("다자녀 우대사항 적용")) {
				totalBenifitstatus++;
				numberFour++;
			}
			if (orderListSaveClass.getCsvList().get(i).get(5).equals("임산부 우대사항 적용")) {
				totalBenifitstatus++;
				numberFive++;
			}
		}

		sc.printEuiYeobLandBenifitTicketStatus();
		sc.ticketDayNightTotalBuy();
		System.out.print(totalBenifitstatus);
		sc._me();

		sc.nonBenifit();
		System.out.print(numberOne);
		sc._me();

		sc.disableBenifit();
		System.out.print(numberTwo);
		sc._me();

		sc.meritBenifit();
		System.out.print(numberThree);
		sc._me();

		sc.manyChildBenifit();
		System.out.print(numberFour);
		sc._me();

		sc.pregnantBenifit();
		System.out.print(numberFive);
		sc._me();

		sc.printendLine();
	}

//	===================================================================================

}
