#include <stdio.h>

// 함수 선언
void input_ary(double *pa, int size);
double find_max(double *pa, int size);
double find_min(double *pa, int size);

int main(void){
	double ary[5];
    double max, min;
    int size = sizeof(ary)/sizeof(ary[0]);

    input_ary(ary, size);       // 함수 호출
	max = find_max(ary, size);
    printf("배열의 최대값 : %.1lf\n", max);

    min = find_min(ary, size);  // 함수 호출
    printf("배열의 최소값 : %.1lf\n", min);

	return 0;
}

void input_ary(double *pa, int size){
    int i;

    printf("%d개의 실수값 입력 : ", size);
    for(i=0; i<size; i++){
        scanf("%lf", pa+i);
    }
}

double find_max(double *pa, int size){
    double max;
    int i;

    max = pa[0];
    for(i=1; i<size; i++){
        if( pa[i] > max) max = pa[i];
    }
    return max;
}

double find_min(double *pa, int size){
    double min;
    int i;

    min = pa[0];
    for(i=1; i<size; i++){
        if( pa[i] < min) min = pa[i];
    }
    return min;
}