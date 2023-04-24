package EuiYeobLandCSV;

import java.text.DecimalFormat;

public class OutputClass extends Thread {

	private CalculateClass cal;
	private DecimalFormat df;

	public OutputClass() {
		cal = new CalculateClass();
		df = new DecimalFormat("###,###,###");
	}

	// 티켓 구매 종료 출력
	public void printResult() throws InterruptedException {

		OrderListSaveClass orderListSaveClass = new OrderListSaveClass();

		int resultPriceSum = 0;
		System.out.println("티켓 발권을 종료합니다. 감사합니다.");

		if (cal.getOrderClassList().size() >= 1) {

			for (int i = 0; i < 76; i++) {
				Thread.sleep(5);
				System.err.print("=");
			}
			System.out.println();
			System.out.println("\t\t\t\t의엽랜드");
			for (int i = 0; i < 76; i++) {
				Thread.sleep(5);
				System.err.print("=");
			}
			System.out.println();

			// ======================================================================================================
			// 출력
			for (int i = 0; i < cal.getOrderClassList().size(); i++) {

				System.out.printf("%s\t%s\tX\t%d\t%s원     \t%s\t\n", cal.getOrderClassList().get(i).getDayOrNight(),
						cal.getOrderClassList().get(i).getAdultOrChild(),
						cal.getOrderClassList().get(i).getHowManyTickets(),
						df.format(cal.getOrderClassList().get(i).getTotalPrice()),
						cal.getOrderClassList().get(i).getBenefitNumber());

				resultPriceSum += cal.getOrderClassList().get(i).getTotalPrice();
			}
			System.out.println("입장료 총 금액은 " + df.format(resultPriceSum) + "원 입니다.");
			int number = (int) (Math.random() * 5);
			String[] textArr = { "행복한시간 보내세요~", "오늘도 활기한 하루!", "사랑합니다 의엽랜드~", "울라랄라랄라라라~~", "재밌고 신나는 의엽랜드 환영합니다~" };
			System.out.println("\t\t\t" + textArr[number]);

			// CSV저장
			orderListSaveClass.orderListSaving();
			// ======================================================================================================

			for (int i = 0; i < 76; i++) {
				Thread.sleep(5);
				System.err.print("=");
			}
			System.out.println();
			System.out.println();
		}

	}

	// 헤더 출력
	public void printHeadLineTop() throws InterruptedException {
		for (int i = 0; i < 76; i++) {
			Thread.sleep(5);
			System.err.print("=");
		}
		System.out.println();
		System.out.println("\t\t\t의엽 랜드에 오신걸 환영합니다.");
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

		System.out.println("================================ 의엽랜드 보고서 ===============================");
		System.out.println("날짜\t\t권종\t연령구분\t수량\t가격\t\t우대사항");
		for (int i = 0; i < orderListSaveClass.getCsvList().size(); i++) {
			System.out.print(orderListSaveClass.getCsvList().get(i).get(0) + "\t"); // 날짜
			System.out.print(orderListSaveClass.getCsvList().get(i).get(1) + "\t"); // 권종
			System.out.print(orderListSaveClass.getCsvList().get(i).get(2) + "\t"); // 연령구분
			System.out.print(orderListSaveClass.getCsvList().get(i).get(3) + "\t"); // 수량
			System.out.print(df.format(Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4))) + "\t\t"); // 가격
			System.out.print(orderListSaveClass.getCsvList().get(i).get(5)); // 우대사항
			System.out.println();
		}
		System.out.println("============================================================================");
	}

//	===================================================================================

	public void getDayOrNightTotalTickets() {
		System.out.println("================================권종별 판매 현항================================");
		getReportDayTickets();// 주간 티켓 구매율
		System.out.println();
		getReportNightTickets(); // 야간 티켓 구매율
		System.out.println("============================================================================");
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
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("아이")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					baby++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("어린이")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					kid++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("청소년")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					teen++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("어른")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					adult++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("노인")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					oldman++;
				}
			}
		}
		System.out.println("주간권 총 티켓 구매수 : " + countDayTickets);
		System.out.println("유아 : " + baby + " 어린이 : " + kid + " 청소년 : " + teen + " 어른 : " + adult + " 노인 : " + oldman);
		System.out.println("주간권 총 매출 : " + df.format(totalPrice) + "원");
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
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("아이")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					baby++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("어린이")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					kid++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("청소년")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					teen++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("어른")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					adult++;
				}
				if (orderListSaveClass.getCsvList().get(i).get(2).endsWith("노인")) {
					totalPrice += Integer.valueOf(orderListSaveClass.getCsvList().get(i).get(4));
					oldman++;
				}
			}
		}
		System.out.println("야간권 총 티켓 구매수 : " + countDayTickets);
		System.out.println("유아 : " + baby + " 어린이 : " + kid + " 청소년 : " + teen + " 어른 : " + adult + " 노인 : " + oldman);
		System.out.println("주간권 총 매출 : " + df.format(totalPrice) + "원");
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

		System.out.println("==============================우대권 판매 현황==================================");
		System.out.println("총 판매 티켓수\t\t:\t\t" + totalBenifitstatus + "\t매");
		System.out.println("우 대   없 음\t\t:\t\t" + numberOne + "\t매");
		System.out.println("장애인 우대사항\t\t:\t\t" + numberTwo + "\t매");
		System.out.println("유공자 우대사항\t\t:\t\t" + numberThree + "\t매");
		System.out.println("다자녀 우대사항\t\t:\t\t" + numberFour + "\t매");
		System.out.println("임산부 우대사항\t\t:\t\t" + numberFive + "\t매");
		System.out.println("============================================================================");
	}

//	===================================================================================

}
