package EuiYeobLandCSV;

public class OrderListClass {

	private String dayOrNight; // 주간인지 야간인지
	private String adultOrChild; // 성인인지 청소년인지 등등
	private int howManyTickets; // 티켓 구매 수
	private int totalPrice; // 총 가격
	private String benefitNumber; // 우대 선택
	private String date; // 날짜

	public OrderListClass(String dayOrNight, String adultOrChild, int howManyTickets, int totalPrice,
			String benefitNumber, String date) {
		super();
		this.dayOrNight = dayOrNight;
		this.adultOrChild = adultOrChild;
		this.howManyTickets = howManyTickets;
		this.totalPrice = totalPrice;
		this.benefitNumber = benefitNumber;
		this.date = date;
	}

	public String getDayOrNight() {
		return dayOrNight;
	}

	public void setDayOrNight(String dayOrNight) {
		this.dayOrNight = dayOrNight;
	}

	public String getAdultOrChild() {
		return adultOrChild;
	}

	public void setAdultOrChild(String adultOrChild) {
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

	public String getBenefitNumber() {
		return benefitNumber;
	}

	public void setBenefitNumber(String benefitNumber) {
		this.benefitNumber = benefitNumber;
	}

	public String getDate() {
		return date;
	}

	public void setDate(String date) {
		this.date = date;
	}

}
