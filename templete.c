#include<mysql/mysql.h>
// #include<mysql/my_global.h>
 
#include <string.h>
 
int main(int argc, char** argv){
    MYSQL* conn, connection;
    MYSQL_RES* result;
    MYSQL_ROW row;
 
    char DB_HOST[] = "@호스트명";
    char DB_USER[] = "@사용자명";
    char DB_PASS[] = "@비밀번호";
    char DB_NAME[] = "@DB명";
    char sql[1024];
    char str1[1024], str2[1024];
 
    mysql_init(&connection);
    conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char *)NULL, 0);
 
 
    // INSERT / UPDATE / DELETE 쿼리
    strcpy(sql, "INSERT INTO test VALUES(1, 'test')");
    if(mysql_query(conn, sql) != 0){
        // 에러
    }
 
 
    // SELECT 쿼리
    strcpy(sql, "SELECT * FROM test");
    if(mysql_query(conn, sql) == 0){
        result = mysql_store_result(conn);
        while((row = mysql_fetch_row(result)) != NULL){
            strcpy(str1, row[0]);
            strcpy(str2, row[0]);
        }
        mysql_free_result(result);
    }
    else{
        // 에러
    }
 
    mysql_close(conn);
 
    return 0;
}
