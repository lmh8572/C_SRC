#include <stdio.h>

int main(void){

	int a = 385;
	int num = 0;

	num = func(a,1000);

	printf("%d\n", (a/1)%10);		// 1의 자리
	printf("%d\n", (a/10)%10);		// 10의 자리
	printf("%d\n", (a/100)%10);		// 100의 자리
	
	return 0;
}
