package EuiYeobLandCSV;

//상수 모음 클래스
public class ConstValClass {
	// ====================================================
	// 연령별 가격
	public static final int BABY_PRICE = 0;
	public static final int ADULT_DAY_PRICE = 56000;
	public static final int ADULT_NIGHT_PRICE = 46000;
	public static final int TEEN_DAY_PRICE = 47000;
	public static final int TEEN_NIGHT_PRICE = 40000;
	public static final int CHILD_DAY_PRICE = 44000;
	public static final int CHILD_NIGHT_PRICE = 37000;
	public static final int OLD_DAY_PRICE = 44000;
	public static final int OLD_NIGHT_PRICE = 37000;

	// ====================================================
	// 나이에 따른 범위
	public static final int MIN_BABY = 1;
	public static final int MIN_CHILD = 3;
	public static final int MIN_TEEN = 13;
	public static final int MIN_ADULT = 19;
	public static final int MAX_CHILD = 12;
	public static final int MAX_TEEN = 18;
	public static final int MAX_ADULT = 64;

	// ====================================================
	// 할인율
	public static final double DISABLE_DISCOUNT_RATE = 0.6;
	public static final double MERIT_DISCOUNT_RATE = 0.5;
	public static final double MULTICHILD_DISCOUNT_RATE = 0.8;
	public static final double PREGNANT_DISCOUNT_RATE = 0.85;

	// ====================================================
	// 최대 주문량
	public static final int MAX_COUNT = 10;
	public static final int MIN_COUNT = 1;

}
