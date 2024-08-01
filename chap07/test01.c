#include <stdio.h>

void sum (int x, int y);

int main(void){
    sum(5, 10);
    sum(60, 100);

    return 0;
}

void sum(int x, int y){
    int i;
    int hap = 0;
    for (i = x; i < (y+1); i++){ // 10회반복, i값이 1~10까지 변경됨
        hap = hap + i;
    }

    printf("%d\n", hap);
}
