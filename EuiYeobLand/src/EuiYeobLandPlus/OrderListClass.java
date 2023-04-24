package EuiYeobLandPlus;

public class OrderListClass {

	private int dayOrNight; // 1.주간 2.야간
	private int adultOrChild; // 성인인지 청소년인지 등등
	private int howManyTickets; // 티켓 구매 수
	private int totalPrice; // 총 가격
	private int benefitNumber; // 우대 선택
	private String date; // 날짜

	public OrderListClass(int dayOrNight, int adultOrChild, int howManyTickets, int totalPrice, int benefitNumber,
			String date) {
		super();
		this.dayOrNight = dayOrNight;
		this.adultOrChild = adultOrChild;
		this.howManyTickets = howManyTickets;
		this.totalPrice = totalPrice;
		this.benefitNumber = benefitNumber;
		this.date = date;
	}

	public int getDayOrNight() {
		return dayOrNight;
	}

	public void setDayOrNight(int dayOrNight) {
		this.dayOrNight = dayOrNight;
	}

	public int getAdultOrChild() {
		return adultOrChild;
	}

	public void setAdultOrChild(int adultOrChild) {
		this.adultOrChild = adultOrChild;
	}

	public int getHowManyTickets() {
		return howManyTickets;
	}

	public void setHowManyTickets(int howManyTickets) {
		this.howManyTickets = howManyTickets;
	}

	public int getTotalPrice() {
		return totalPrice;
	}

	public void setTotalPrice(int totalPrice) {
		this.totalPrice = totalPrice;
	}

	public int getBenefitNumber() {
		return benefitNumber;
	}

	public void setBenefitNumber(int benefitNumber) {
		this.benefitNumber = benefitNumber;
	}

	public String getDate() {
		return date;
	}

	public void setDate(String date) {
		this.date = date;
	}

}
