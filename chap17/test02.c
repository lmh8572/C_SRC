#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning -Wformat=

// #define INIT

// 구조체 정의
struct student
{
    short num;
    char name[30];
    int kor;
    int eng;
    int math;
    int tot;
    double avg;
    // char grade;
};

// 사용자 함수 선언
void input_info(struct student *s);
void print_student(struct student *s);
void sort_avg(struct student *s);

// -------------------  main 함수 정의  ------------------------------
int main(void){
    // 변수 선언
    int i;

#ifdef INIT
    struct student s[5] = { {315, "홍길동", 80, 75, 90, 245, 81.7},
                            {316, "이순신", 88, 92,100, 280, 93.3},
                            {317, "서하윤", 95, 99, 98, 292, 97.3},
                            {318, "유관순", 84, 70, 72, 226, 75.3},
                            {319, "박신혜", 60, 65, 40, 165, 55.0}
                             };
#else
    struct student s[5];
    input_info(s);
#endif

    printf("# 정렬 전 데이터...\n");
    print_student(s);

    sort_avg(s);    

    printf("# 정렬 후 데이터...\n");    
    print_student(s);

    return 0;
}

// -------------------  사용자 함수 정의  ------------------------------
void input_info(struct student *s){
    int i;
    for(i =0; i<2; i++)
    {
        // 입력
        printf("학번 : ");
        scanf("%d", &s[i].num);
        printf("이름 : ");
        scanf("%s", s[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d", &s[i].kor,&s[i].eng,&s[i].math);

        // 총점, 평균
        s[i].tot = s[i].kor + s[i].eng + s[i].math;
        s[i].avg = s[i].tot / 3.0;
    }

}
void print_student(struct student *s){
    int i;

    for(i =0; i<5; i++)
    {
        // 출력
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\n", 
            s[i].num,s[i].name,s[i].kor,s[i].eng,s[i].math,s[i].tot,s[i].avg);
    }
}

void sort_avg(struct student *s){
    int i, j;
    struct student temp;

    for(i=0; i < (5-1); i++){
        for(j=i+1; j<5; j++){
            if (s[i].avg < s[j].avg){
                temp = s[i];
                s[i]  = s[j];
                s[j] = temp;
            }
        }
    }
}