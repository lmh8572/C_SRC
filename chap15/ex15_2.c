#include <stdio.h>

void swap_ptr(char *pa, char *pb);

int main(void){
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    printf("%12u, %12u\n", pa, &pa);
    printf("%12u, %12u\n", pb, &pb);
    swap_ptr(&pa, &pb);       // 함수의 호출
    // char *pt  = pa;
    // pa = pb;
    // pb = pt;

    printf("pa -> %s, pb -> %s\n", pa, pb);

    return 0;
}

void swap_ptr(char *pa, char *pb){
    char *pt;
    pt = *pa;
    *pa = *pb;
    *pb = pt;

    printf("swap_func : pa -> %s, pb -> %s\n", *pa, *pb);
}
