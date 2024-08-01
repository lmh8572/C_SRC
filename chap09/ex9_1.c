#include <stdio.h>

int main(void)
{
	int a;             // int형 변수 선언
    int* pa = &a;
	double b;          // double형 변수 선언
	char c;            // char형 변수 선언

    //pa = &a;        // 포인터에 a의 주소 대입
    *pa = 10;       // 포인터로 변수 a에 10대입

	printf("a 변수의 주소 : %p\n", &a);     // 주소 연산자로 주소 계산
	printf("pa에 저장된 변수의 주소 : %p\n", pa);

    printf("포인터로 a값 출력 : %d\n", *pa);
    printf("변수명으로 a값 출력 : %d\n", a);

    
	

	return 0;
}