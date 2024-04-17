#include <stdio.h>
#define NUM_STUDENTS 10 // 학생 수

// 평균을 구하는 함수
float getAverage(float scores[],int n) {
    float sum = 0.0;
    float average;

    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    // 평균 계산
    average = sum / n;
    return average;
}

// 점수를 입력받는 함수
int inputScore(float scores[],int n) {
    for (int i = 0; i < n; i++) {
        printf("학생 %d의 성적: ", i + 1);
        scanf_s("%f", &scores[i]);
    }
    return 0;
}

int main() {
    float scores[NUM_STUDENTS];
    inputScore(scores, NUM_STUDENTS);

    //평균값 반환
    float average = getAverage(scores, NUM_STUDENTS);

    // 평균 출력
    printf("\n입력한 학생들의 성적의 평균은: %.2f\n", average);

    //성적 분포 계산
    int distribution[10] = { 0 };
    int idx;
    for (int i = 0; i < NUM_STUDENTS; i++) { // i = 0 ~ 9
        float score = scores[i]; // float 성적
        if (score != 0) {
            if ((int)score % 10 == 0) idx = (int)score / 10 - 1;
            else idx = (int)(score / 10);
            distribution[idx]++;
        }
        else {
            distribution[0]++;
        }
    }

    //성적 분포 출력
    printf("\n< 10점 단위 점수 분포도 >");
    printf("\n 점수대 | 인원수 ");
    for (int i = 0; i <10; i++) {
        int startRange; 
        if (i == 0) startRange = 0;
        else startRange = ( i * 10 + 1 );
        printf("\n%d ~ %d :  %d", startRange,(i+1)*10, distribution[i]);
    }

	
	return 0;
}