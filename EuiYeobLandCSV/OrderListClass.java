package EuiYeobLandCSV;

public class OrderListClass {

	private String dayOrNight;
	private String adultOrChild;
	private int howManyTickets;
	private int totalPrice;
	private String benefitNumber;
	private String date;

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
