package EuiYeobLandLocale;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.util.List;

public class JDBCconnector {

	static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";
	static final String DB_URL = "jdbc:mysql://localhost/test";

	static final String USER = "root";
	static final String PASS = "123456";

	public void writeToDB(List<OrderListClass> list) {

		Connection conn = null;
		Statement stmt = null;

		try {
			Class.forName(JDBC_DRIVER);
			conn = DriverManager.getConnection(DB_URL, USER, PASS);
			stmt = conn.createStatement();

			// 반복을 통해 리스트 값을 하나씩 꺼내서 문자열에 담는다.
			for (OrderListClass order : list) {

				String str = order.getDate() + "," + order.getDayOrNight() + "," + order.getAdultOrChild() + ","
						+ order.getHowManyTickets() + "," + order.getTotalPrice() + "," + order.getBenefitNumber();
				String sql = "INSERT INTO orderlist VALUES (" + str + ")";

				// 데이터 베이스 저장 명령어로 문자열 안에 저장된 sql언어를 날린
				stmt.executeUpdate(sql);
			}

		} catch (Exception e) {

		}
	}
}
