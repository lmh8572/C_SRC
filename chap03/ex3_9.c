#include <stdio.h>

int main(void)
{
	int I1 = 0;
	double D2 = 0.0;
	double sum = 0.0;
	
	printf("정수형 숫자1, 실수형 숫자2 입력 : ");
	scanf("%d%lf", &I1, &D2);
	
	sum = I1 + D2;
	
	// 10 + 20 = 30
	printf("%d + %lf = %lf\n", I1, D2, sum);

	return 0;
}
