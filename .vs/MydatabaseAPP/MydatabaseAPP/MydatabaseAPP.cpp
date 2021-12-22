#include <mysql.h>
#include<iostream>
#include<Windows.h>


using namespace std;

int qstate;

int main() {
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);

	conn = mysql_real_connect(conn, "localhost", "root", "Chance50.-90NYA", "lincdb", 3306, NULL, 0);
	if (conn) {
		puts("Success connection to database");

		string query = "SELECT * FROM linc";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (conn) {
			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res)) {
				printf("ID: %s, NAME: %s, VALUE:%s\n", row[0], row[1], row[2]);
			}
		}
		else {
			cout << "query failed!  " << mysql_error(conn) << endl;
		}
	}
	else {
		puts("connection to database failed!");
	}
	return 0;
}
