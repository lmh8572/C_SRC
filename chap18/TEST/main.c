#include <stdio.h>
#include <string.h>

int main(void){
    FILE *afp, *bfp, *cfp;
    int ch;
    char aWord[10][20] = {0};
    char bWord[10][20] = {0};
    char cWord[10][20] = {0};
    char *res;

    // ----------------------- 파일 열기 ---------------------
    // a.txt
    afp = fopen("a.txt", "r");

    if(afp == NULL){
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    // b.txt
    bfp = fopen("b.txt", "r");

    if(bfp == NULL){
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    // c.txt
    cfp = fopen("c.txt", "w");

    if(cfp == NULL){
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    // ----------------------- 변수에 저장 ---------------------
    // a값 저장
    for(int i=0; i<10; i++)
    {
        res = fgets(aWord[i], sizeof(aWord[i]), afp);    // 함수 파일의 데이터를 모두 읽으면 EOF를 반환
        if(res == NULL){
            break;
        }
        // aWord[0][strlen(aWord[0])-1] = '\0';
        // printf("%s", aWord[i]); 
    }


    // b값 저장
    for(int i=0; i<10; i++)
    {
        res = fgets(bWord[i], sizeof(bWord[i]), bfp);    // 함수 파일의 데이터를 모두 읽으면 EOF를 반환
        if(res == NULL){
            break;
        }
        // aWord[0][strlen(aWord[0])-1] = '\0';
        // printf("%s", aWord[i]); 
    }

    // c값 저장
    int i,j;
    int temp = 0;
    int cnt = 0;

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if( strcmp(aWord[j], bWord[i]) == 0) 
            {
                temp = 1;   // 같은게 있으면, 1
                break;
            }
            else{
                temp = 0;
            }
        }
        if(temp == 0){
            //  C에 저장
            strcpy(cWord[cnt], bWord[i]);
            cnt++;
        }
    }
    
    // ----------------------- 파일 닫기 ---------------------
    fclose(afp);
    fclose(bfp);

    return 0;
}