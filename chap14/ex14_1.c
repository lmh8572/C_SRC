#include <stdio.h>

int main(void)
{
    const int KOR = 0, ENG = 1, MAT = 0, SCI = 0;

	int score[3][4] = { {72,80,95,60},
                        {68,98,83,90},
                        {75,72,84,90} };
	int total;                // 총점
	double avg;               // 평균
	int i, j;                 // 반복 제어 변수

    printf("size = %d\n", sizeof(score));
    printf("size = %d\n", sizeof(score[0]));
    printf("size = %d\n", sizeof(score[0][0]));

    // 행의 수
    printf("행의 수 : %d\n", sizeof(score)/sizeof(score[0]));
    // 열의 수
    printf("열의 수 : %d\n", sizeof(score[0])/sizeof(score[0][0]));

	// for (i = 0; i < 3; i++)               // 학생 수만큼 반복
	// {
	// 	printf("4과목의 점수 입력 : ");   // 입력 안내 메시지
	// 	for (j = 0; j < 4; j++)           // 과목 수만큼 반복
	// 	{
	// 		scanf("%d", &score[i][j]);    // 점수 입력
	// 	}
	// }

	for (i = 0; i < 3; i++)               // 학생 수 만큼 반복
	{
		total = 0;                        // 학생이 바뀔 때마다 0으로 초기화
		for (j = 0; j < 4; j++)           // 과목 수 만큼 반복
		{
			total += score[i][j];         // 학생별로 총점 누적
		}
		avg = total / 4.0;                // 평균 계산
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);   // 총점, 평균 출력
	}

    // 국어 총점, 평균을 구하시오.
    int kor_tot = 0;
    double kor_avg = 0.0;

    for(i=0; i<3; i++){
        kor_tot += score[i][KOR];
    }


	return 0;
}