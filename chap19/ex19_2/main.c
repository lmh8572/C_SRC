#include <stdio.h>
#define PI  3.141592
#define SUM(a,b) a+b
#define MUL(a,b) a*b

int main(void){
    // double area;
    // double PI = 3.141592;
    // int size = 100;
    // char str[size];

    // area = PI * 10 * 10;
    // printf("원의 면적 : %.2lf\n", area);

    int a=10, b=20;

    printf("a + b = %d\n", a+b);
    printf("a * b = %d\n", MUL(a,b));

    printf("파일명 : %s\n", __FILE__);
    


    return 0;    
}