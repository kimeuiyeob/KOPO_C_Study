package EuiYeobLandLocale;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class OrderListSaveClass {

	private static List<List<String>> csvList = new ArrayList<>();

	public static List<List<String>> getCsvList() {
		return csvList;
	}

	private CalculateClass cal;

	public OrderListSaveClass() {
		cal = new CalculateClass();
	}

	String filePath = "C:/Users/euiyeob/Desktop/csvFile/practice.csv";
	File file = null;
	BufferedWriter bw = null;

	// CSV 파일 저장
	public void orderListSaving() {
		file = new File(filePath);

		try {
			bw = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(file, true), "MS949"));
			for (int i = 0; i < cal.getOrderClassList().size(); i++) {

				bw.write(cal.getOrderClassList().get(i).getDate() + ",");

				if (cal.getOrderClassList().get(i).getDayOrNight() == 1) {
					bw.write("주간권,");
				} else if (cal.getOrderClassList().get(i).getDayOrNight() == 2) {
					bw.write("야간권,");
				}

				if (cal.getOrderClassList().get(i).getAdultOrChild() == 1) {
					bw.write("어른,");
				} else if (cal.getOrderClassList().get(i).getAdultOrChild() == 2) {
					bw.write("청소년,");
				} else if (cal.getOrderClassList().get(i).getAdultOrChild() == 3) {
					bw.write("어린이,");
				} else if (cal.getOrderClassList().get(i).getAdultOrChild() == 4) {
					bw.write("노인,");
				} else if (cal.getOrderClassList().get(i).getAdultOrChild() == 5) {
					bw.write("아이,");
				}

				bw.write(cal.getOrderClassList().get(i).getHowManyTickets() + ",");
				bw.write(cal.getOrderClassList().get(i).getTotalPrice() + ",");

				if (cal.getOrderClassList().get(i).getBenefitNumber() == 1) {
					bw.write("없음,");
				} else if (cal.getOrderClassList().get(i).getBenefitNumber() == 2) {
					bw.write("장애인 우대사항 적용,");
				} else if (cal.getOrderClassList().get(i).getBenefitNumber() == 3) {
					bw.write("유공자 우대사항 적용,");
				} else if (cal.getOrderClassList().get(i).getBenefitNumber() == 4) {
					bw.write("다자녀 우대사항 적용,");
				} else if (cal.getOrderClassList().get(i).getBenefitNumber() == 5) {
					bw.write("임산부 우대사항 적용,");
				}
				bw.newLine();
			}

		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		} finally {
			try {
				if (bw != null) {
					bw.close();
				}
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}

	// CSV 파일 읽고 LIST에 저장
	public void orderListReading() {

		File csv = new File("C:/Users/euiyeob/Desktop/csvFile/practice.csv");
		BufferedReader br = null;
		String line = "";

		try {
			br = new BufferedReader(new FileReader(csv, Charset.forName("MS949")));
			while ((line = br.readLine()) != null) {
				List<String> aLine = new ArrayList<>();
				String[] lineArr = line.split(",");
				aLine = Arrays.asList(lineArr);
				csvList.add(aLine);
			}
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		} finally {
			try {
				if (br != null) {
					br.close();
				}
			} catch (IOException e) {
				e.printStackTrace();
			}
		}

	}
}
