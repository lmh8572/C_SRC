#include <stdio.h>

int main(void){
    int a = 20;
    int b = 0;

    if ( (a % 2) == 0)
    {
        a = 2;
    }        
    else{
        a = 1;
    }

    printf("a : %d, b : %d\n", a, b);

    return 0;
}