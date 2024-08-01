#include <stdio.h>
#include <stdlib.h>

int main(void){
    int **matrix = (int **)malloc(4 * sizeof(int *));
    int i,j;
    int num = 0;

    for(i=0; i<4; i++){
        matrix[i] = (int*)malloc(5*sizeof(int));
    }

    for(i=0; i<4;i++){
        for(j=0; j<5;j++){
            matrix[i][j] = num;
            num++;
        }
    }
    
    printf("%d\n", matrix[0][3]);
    
    return 0;
}