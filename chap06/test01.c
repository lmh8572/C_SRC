#include <stdio.h>

int main(void){
	// To Do
    int i,j;
    int num = 1;

    for(j=0; j<5; j++)
    {
        for(i=1; i<8; i++){
            printf("%2d ", i);
            //num++;
        }
        printf("\n");
    }

   	return 0;
}