#include <stdio.h>

int sum(int x, int y);  // 함수 선언

int main(void){
	int a = 10;
    double b = 20.0;
    int result;

    result = sum(a, (int)b);     // 함수 호출	
    printf("%d\n", result);

	return 0;
}

// 함수 구현(정의)
int sum(int x, int y){
    int temp;
    temp = x + y;
    return temp;    //반환값
}

