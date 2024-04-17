#include <stdio.h>
#define SIZE 10;
#define _CRT_SECURE_NO_WARNINGS
struct student {
	int number;
	char name[20];
	double grade;
};

int main() {
	//struct student list[10]; // 구조체의 배열 선언
	struct student list[3] = {
		{ 1, "Park", 3.42 },
		{ 2, "Kim", 4.31 },
		{ 3, "Lee", 2.98 }
	};
	list[0].number = 11;
	strcpy(list[0].name, "홍길동");
	list[0].grade = 4.3;

	int n = sizeof(list) / sizeof(list[0]);
	n = sizeof(list) / sizeof(struct student);
	printf("%d\n", n);

	/*for (int i = 0; i < n; i++){
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}*/
	for (int i = 0; i < n; i++) {
		printf("학번: %d, 이름: %s, 학점: %.2f\n", list[i].number, list[i].name, list[i].grade);
	}
		



	return 0;
}