#include <stdio.h>

union student{
    int i;
    short sh;
    char ch;
};

int main(void){
    union student num = {0x10};

    printf(" i : %12p\n", num.i);
    printf(" sh : %12p\n", num.sh);
    printf(" ch : %12p\n", num.ch);

}