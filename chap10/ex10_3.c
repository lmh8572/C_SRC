#include <stdio.h>

int main(void){
	int ary[3] = {10,20,30};
    int a[3] = {10,20,30};
    int *pa;
    int i;

    pa = ary;

    printf("배열의 값 : ");
    for(i=0; i<3; i++){
        printf("%d ", *pa);
        pa++;   // pa = pa + 1;
    }	
    printf("\n");

	return 0;
}
