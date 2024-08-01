#include <stdio.h>

int main(void){
	// To Do
	int a;
	int b,c;
	double da;
	char ch;
	
	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';
	
	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", a);
	printf("변수 c의 값 : %d\n", a);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);
	
	printf("-------------------------------\n\n");
	
	char ch1 = 'A';
	char ch2 = 65;
	
	printf("문자 %c의 아스키 코드값 : %d\n", ch1, ch1);
	printf("아스키 코드값이 %d인 문자 : %c\n", ch2, ch2);
	
	printf("-------------------------------\n\n");
	
	
	unsigned char num = 128;
	long long lln = 123456789012345678901234567890;
	printf("char형 변수 출력 : %d\n", num);
	printf("long long 형 변수 출력 : %lld\n", lln);
	
	return 0;
}
