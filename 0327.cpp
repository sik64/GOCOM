#include <stdio.h>
#define NUM_STUDENTS 10 // �л� ��

// ����� ���ϴ� �Լ�
float getAverage(float scores[],int n) {
    float sum = 0.0;
    float average;

    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    // ��� ���
    average = sum / n;
    return average;
}

// ������ �Է¹޴� �Լ�
int inputScore(float scores[],int n) {
    for (int i = 0; i < n; i++) {
        printf("�л� %d�� ����: ", i + 1);
        scanf_s("%f", &scores[i]);
    }
    return 0;
}

int main() {
    float scores[NUM_STUDENTS];
    inputScore(scores, NUM_STUDENTS);

    //��հ� ��ȯ
    float average = getAverage(scores, NUM_STUDENTS);

    // ��� ���
    printf("\n�Է��� �л����� ������ �����: %.2f\n", average);

    //���� ���� ���
    int distribution[10] = { 0 };
    int idx;
    for (int i = 0; i < NUM_STUDENTS; i++) { // i = 0 ~ 9
        float score = scores[i]; // float ����
        if (score != 0) {
            if ((int)score % 10 == 0) idx = (int)score / 10 - 1;
            else idx = (int)(score / 10);
            distribution[idx]++;
        }
        else {
            distribution[0]++;
        }
    }

    //���� ���� ���
    printf("\n< 10�� ���� ���� ������ >");
    printf("\n ������ | �ο��� ");
    for (int i = 0; i <10; i++) {
        int startRange; 
        if (i == 0) startRange = 0;
        else startRange = ( i * 10 + 1 );
        printf("\n%d ~ %d :  %d", startRange,(i+1)*10, distribution[i]);
    }

	
	return 0;
}