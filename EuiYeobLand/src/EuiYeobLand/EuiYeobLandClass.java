package EuiYeobLand;

import java.util.Scanner;

//티켓 구매 프로그램 클래스
public class EuiYeobLandClass {

	private CalculateClass calculateClass = null; // 연산 클래스
	private InputClass inputClass = null; // 입력 클래스
	private OutputClass outputClass = null; // 풀력 클래스
	private OrderListSaveClass orderListSaveClass = null; // CSV 저장,읽기
	private TanslateClass tanslateClass = null;

	public EuiYeobLandClass() {
		calculateClass = new CalculateClass();
		inputClass = new InputClass();
		outputClass = new OutputClass();
		orderListSaveClass = new OrderListSaveClass();
		tanslateClass = new TanslateClass();

	}

	// 티켓 구매 메서드
	public void startBuyTickets() {

		int number = inputClass.chooseLanguage(); // 언어선택 1.한국어, 2.영어

		tanslateClass.setLANGUAGE(number);
		tanslateClass.translateMSG();

		try {
			outputClass.printHeadLineTop(); // 헤더 출력
		} catch (InterruptedException e) {
			e.printStackTrace();
		}

		while (true) {

			// 티켓 구매 실행
			int dayOrNight = inputClass.ticketDayorNight(); // 주간권1 / 야간권2
			String[] residentNumber = inputClass.inputResidentNumber(); // 주민등록번호
			int age = calculateClass.getAge(residentNumber[0], residentNumber[1]); // 만나이 계산
			int buyHowManyTickets = inputClass.howManyOrderTicket(); // 구매한 티켓수
			int selectDiscount = inputClass.selectDiscount(); // 우대사항 선택 (1,2,3,4,5)
			int moneyWithDayOrNightAge = calculateClass.calcPriceProcess(age, dayOrNight); // 주간,야간 및 연령에 따른 가격표
			int moneyDiscount = calculateClass.calcDiscount(moneyWithDayOrNightAge, selectDiscount); // 우대사항 가격 할인
			int totalPrice = calculateClass.resultTotalPrice(moneyDiscount, buyHowManyTickets); // 최종 가격
			String date = calculateClass.getDate(); // 오늘 날짜
			calculateClass.saveOrderList(dayOrNight, age, buyHowManyTickets, totalPrice, selectDiscount, date); // 주간권,청소년,티켓수량,최종가격,우대사항

			int keeyBuyOrNot = inputClass.keepBuyTicket(); // 1번일때 계속구매, 2번일때 BREAK
			if (keeyBuyOrNot == 2) {
				try {
					outputClass.printResult(number);
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
				break;
			}
		}

		// CSV 관련
		orderListSaveClass.orderListReading(); // CSV 읽어와서 저장
		outputClass.getTotalCSVReport(); // 전체 출력
		outputClass.getDayOrNightTotalTickets(); // 주간,야간 권종별 판매현황
		outputClass.getReportBenifitStatus(); // 총 우대별 구매티켓 개수
	}
}
