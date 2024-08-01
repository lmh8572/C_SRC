#include <stdio.h>

int main(void){
    int a = 0;
    int i;

    // for문 작성
    // for(i=1; 1; i++){ // i=i+1
    //     a = a + i;
    // }

    // while문 작성
    i = 1;  // 초기식
    while(i<11){    // 조건식
        i++;        // 증감식
        a = a + i;
    }

    i = 1;  // 초기식
    do{
        a = a + i;
    }while(i<11);

    printf("a : %d\n", a);
    printf("i : %d\n", i);

    printf("$");
    printf("%c", '$');

    return 0;
}