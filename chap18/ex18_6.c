#include <stdio.h>

int main(void){
    FILE *fp;
    int ary[10]  = {13, 10, 13, 13, 10, 26, 13, 10, 13, 10};
    int i, res;

    fp = fopen("a.txt", "wb");

    for(i =0; i<10; i++){
        fputc(ary[i], fp);
    }

    fclose(fp);

    fp = fopen("a.txt", "rt");
    
    while(1)
    {
        res = fgetc(fp);     // 함수 파일의 데이터를 모두 읽으면 EOF를 반환
        if(res == EOF) break;
        printf("%4d", res);    // 표준 출력함수
    }
    
    fclose(fp);

    return 0;
}