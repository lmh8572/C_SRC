#include <stdio.h>

int main(void){
    int a = 10;

    // printf("%d\n", a);
    // printf("%lf\n", (double)a);

    int *p = &a;
    double *pd;

    pd = p;
    printf("%d\n", *((int*)pd));

	return 0;
}
