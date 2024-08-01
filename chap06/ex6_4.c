#include <stdio.h>

int main(void)
{
    int i, j;

    for (j = 0; j < 5; j++) // 5회반복, j값이 0~4까지 변경됨
    {
        for (i = 5; i > j; i--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
    
}