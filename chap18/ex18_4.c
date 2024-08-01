#include <stdio.h>

int main(void){
    int ch;

    while(1)
    {
        //ch = getchar();
        ch = fgetc(stdin);
        if(ch == EOF)
        {
            printf("EOF가 입력됨\n");
            break;
        }
        // putchar(ch);
        fputc(ch,stdout);
    }

    return 0;
}