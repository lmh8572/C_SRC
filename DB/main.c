#include <stdio.h>
#include <stdlib.h>
#include </usr/include/mysql/mysql.h>

// MySQL 연결 정보 설정
#define SERVER "localhost"
#define USER "test"
#define PASSWORD "1234"
#define DATABASE "scoredb"

int main() {
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    // MySQL 핸들러 초기화
    conn = mysql_init(NULL);

    // MySQL 서버에 연결
    if (!mysql_real_connect(conn, SERVER, USER, PASSWORD, DATABASE, 0, NULL, 0)) {
        fprintf(stderr, "mysql_real_connect() failed\n");
        fprintf(stderr, "Error: %s\n", mysql_error(conn));
        return EXIT_FAILURE;
    }

    // 쿼리 실행
    if (mysql_query(conn, "SELECT * FROM madangdb.Book;")) {
        fprintf(stderr, "SELECT * FROM your_table failed. Error: %s\n", mysql_error(conn));
        return EXIT_FAILURE;
    }

    // 쿼리 결과 가져오기
    res = mysql_store_result(conn);
    if (res == NULL) {
        fprintf(stderr, "mysql_store_result() failed. Error: %s\n", mysql_error(conn));
        return EXIT_FAILURE;
    }

    // 결과 출력
    int num_fields = mysql_num_fields(res);
    while ((row = mysql_fetch_row(res))) {
        for (int i = 0; i < num_fields; i++) {
            printf("%s ", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }

    // 메모리 해제 및 MySQL 연결 종료
    mysql_free_result(res);
    mysql_close(conn);

    return EXIT_SUCCESS;
}
