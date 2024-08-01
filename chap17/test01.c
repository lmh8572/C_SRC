#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
    char *title;
    char author[20];
    int page;
    int price;
};

int main(void){
    char temp[100];
    struct book b1;

    printf("제목을 입력하세요 : ");
    gets(temp);
    b1.title = (char*)malloc(strlen(temp)+1);
    strcpy(b1.title, temp);
    strcpy(b1.author, "서현우");
    b1.page = 663;
    b1.price = 26000;

    // 멤버 변수들 값 출력 함수
    print_book(b1);

    return 0;
}