#include <stdio.h>
#include <stdlib.h>

// add
int main(int argc, char **argv){
    if(argc != 3){
        printf("using : ./main 10 20\n");
        return 0;
    }

    printf("%s + %s = %d\n", argv[1], argv[2], atoi(argv[1])+atoi(argv[2]) );
    
    // for(int i=0; i<argc; i++){
    //     printf("argv[%d] : %s\n", i, argv[i]);
    // }

    return 0;
}