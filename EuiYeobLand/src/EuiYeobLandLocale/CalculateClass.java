package EuiYeobLandLocale;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

//모든 연산 관련 클래스
public class CalculateClass {

	private static List<OrderListClass> orderClassList = new ArrayList<>();
	private OrderListClass orderLsit;

	public static List<OrderListClass> getOrderClassList() {
		return orderClassList;
	}

//	===================================================================================
	// 나이계산
	public int getAge(String frontNumber, String backNumber) {

		LocalDate today = LocalDate.now();
		int todayYear = today.getYear();
		int todayMonth = today.getMonthValue();
		int todayDay = today.getDayOfMonth();

		// 주민등록번호를 통해 입력 받은 날짜
		int year = Integer.parseInt(frontNumber.substring(0, 2));
		int month = Integer.parseInt(frontNumber.substring(2, 4));
		int day = Integer.parseInt(frontNumber.substring(4, 6));

		// 주민등록번호 뒷자리로 몇년대인지
		String gender = backNumber.substring(0, 1);
		if (gender.equals("1") || gender.equals("2")) {
			year += 1900;
		} else if (gender.equals("3") || gender.equals("4")) {
			year += 2000;
		} else if (gender.equals("0") || gender.equals("9")) {
			year += 1800;
		}

		int age = todayYear - year;
		if (month > todayMonth) {
			age--;
		} else if (month == todayMonth) {
			if (day > todayDay) {
				age--;
			}
		}
		return age;
	}

//	===================================================================================
	// 날짜 계산
	public String getDate() {

		LocalDate today = LocalDate.now();
		int todayYear = today.getYear();
		int todayMonth = today.getMonthValue();
		int todayDay = today.getDayOfMonth();

		String month = "";
		String day = "";

		if (todayMonth < 10) {
			month = "0" + String.valueOf(todayMonth);
		} else {
			month = String.valueOf(todayMonth);
		}
		if (todayDay < 10) {
			day = "0" + String.valueOf(todayDay);
		} else {
			day = String.valueOf(todayDay);
		}

		String date = String.join("", String.valueOf(todayYear), month, day);
		return date;
	}

//		==========================================================================
	public int returnAgeNumber(int age) {

		if (age >= ConstValClass.MIN_ADULT && age <= ConstValClass.MAX_ADULT) {
			return 1;
		} else if (age >= ConstValClass.MIN_TEEN && age <= ConstValClass.MAX_TEEN) {
			return 2;
		} else if (age >= ConstValClass.MIN_CHILD && age <= ConstValClass.MAX_CHILD) {
			return 3;
		} else if (age >= ConstValClass.MAX_ADULT) {
			return 4;
		} else if (age == ConstValClass.MIN_BABY) {
			return 5;
		}

		return 0;
	}

//		==========================================================================
	// 연령에 따른 티켓 가격 함수
	public int calcPriceProcess(int age, int ticketSelect) {
		int calcPrice = 0;
		if (ticketSelect == 1) {
			if (age >= ConstValClass.MIN_ADULT && age <= ConstValClass.MAX_ADULT) {
				calcPrice = ConstValClass.ADULT_DAY_PRICE;
			} else if (age >= ConstValClass.MIN_TEEN && age <= ConstValClass.MAX_TEEN) {
				calcPrice = ConstValClass.TEEN_DAY_PRICE;
			} else if (age >= ConstValClass.MIN_CHILD && age <= ConstValClass.MAX_CHILD) {
				calcPrice = ConstValClass.CHILD_DAY_PRICE;
			} else if (age >= ConstValClass.MAX_ADULT) {
				calcPrice = ConstValClass.OLD_DAY_PRICE;
			} else if (age == ConstValClass.MIN_BABY) {
				calcPrice = 0;
			}
		}
		if (ticketSelect == 2) {
			if (age >= ConstValClass.MIN_ADULT && age <= ConstValClass.MAX_ADULT) {
				calcPrice = ConstValClass.ADULT_NIGHT_PRICE;
			} else if (age >= ConstValClass.MIN_TEEN && age <= ConstValClass.MAX_TEEN) {
				calcPrice = ConstValClass.TEEN_NIGHT_PRICE;
			} else if (age >= ConstValClass.MIN_CHILD && age <= ConstValClass.MAX_CHILD) {
				calcPrice = ConstValClass.CHILD_NIGHT_PRICE;
			} else if (age >= ConstValClass.MAX_ADULT) {
				calcPrice = ConstValClass.OLD_NIGHT_PRICE;
			} else if (age == ConstValClass.MIN_BABY) {
				calcPrice = 0;
			}
		}
		return calcPrice;
	};

//		==========================================================================
	// 우대사항 가격으로 할인율 계산

	public int calcDiscount(int calcPrice, int discountSelect) {
		double discountPrice = 0;
		if (discountSelect == 1) {
			discountPrice = calcPrice;
		} else if (discountSelect == 2) {
			discountPrice = calcPrice * ConstValClass.DISABLE_DISCOUNT_RATE;
		} else if (discountSelect == 3) {
			discountPrice = calcPrice * ConstValClass.MERIT_DISCOUNT_RATE;
		} else if (discountSelect == 4) {
			discountPrice = calcPrice * ConstValClass.MULTICHILD_DISCOUNT_RATE;
		} else if (discountSelect == 5) {
			discountPrice = calcPrice * ConstValClass.PREGNANT_DISCOUNT_RATE;
		}
		return (int) discountPrice;
	};

//		==========================================================================
	// 결과 나온 가격으로 티켓 구매갯수 계산

	public int calcPriceResult(int calcPrice, int orderCount) {
		int totalPrice;
		totalPrice = calcPrice * orderCount;
		return totalPrice;
	};

//		==========================================================================
	// 결과 금액

	public int resultTotalPrice(int priceResult, int tickets) {
		int totalPrice = priceResult * tickets;
		return totalPrice;
	};

//		==========================================================================
	// 주문내역 전체 저장
	public void saveOrderList(int dayOrNight, int age, int buyHowManyTickets, int totalPrice, int benefitNumber,
			String date) {

		OrderListClass orderList = new OrderListClass(dayOrNight, age, buyHowManyTickets, totalPrice, benefitNumber,
				date);

		orderClassList.add(orderList);
	};

//	==========================================================================
	// 주간 야간 저장
	public String saveDayOrNight(int dayOrNight) {
		if (dayOrNight == 1) {
			return "주간권";
		} else if (dayOrNight == 2) {
			return "야간권";
		}
		return null;
	}

	// 어른,청소년 구분 저장
	public String saveAdultOrChild(int age) {
		if (age >= ConstValClass.MIN_ADULT && age <= ConstValClass.MAX_ADULT) {
			return "어른";
		} else if (age >= ConstValClass.MIN_TEEN && age <= ConstValClass.MAX_TEEN) {
			return "청소년";
		} else if (age >= ConstValClass.MIN_CHILD && age <= ConstValClass.MAX_CHILD) {
			return "어린이";
		} else if (age >= ConstValClass.MAX_ADULT) {
			return "노인";
		} else if (age == ConstValClass.MIN_BABY) {
			return "아이";
		}
		return null;
	}

	// 우대사항 저장
	public String saveBenefitNumber(int benefitNumber) {
		if (benefitNumber == 1) {
			return "우대 사항 없음";
		} else if (benefitNumber == 2) {
			return "장애인 우대사항 적용";
		} else if (benefitNumber == 3) {
			return "유공자 우대사항 적용";
		} else if (benefitNumber == 4) {
			return "다자녀 우대사항 적용";
		} else if (benefitNumber == 5) {
			return "임산부 우대사항 적용";
		}
		return null;
	}
//	==========================================================================

}
