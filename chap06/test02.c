#include <stdio.h>

int main(void){
	// To Do
	int i;
    int sum = 0;

    for (i = 1; i < 101; i++)// 100회반복, i값이 1~100까지 변경됨
    {
        if( ((i%3) != 0) && ((i%7) != 0) ){
            continue;
        }

        sum += i;
    }

    printf("SUM : %d\n", sum);

	return 0;
}
