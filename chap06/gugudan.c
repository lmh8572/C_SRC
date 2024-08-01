#include <stdio.h>

int main(void)
{
    char i,j;

    for(j=1; j < 10; j++)
    {
        for(i = 2; i < 4; i++)  // 0~8
        {
            printf("%d * %d = %d\t", i, j, j*i);
        }
        printf("\n");
    }

    return 0;
}