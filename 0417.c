#include <stdio.h>
#define SIZE 10;
#define _CRT_SECURE_NO_WARNINGS
struct student {
	int number;
	char name[20];
	double grade;
};

int main() {
	//struct student list[10]; // ����ü�� �迭 ����
	struct student list[3] = {
		{ 1, "Park", 3.42 },
		{ 2, "Kim", 4.31 },
		{ 3, "Lee", 2.98 }
	};
	list[0].number = 11;
	strcpy(list[0].name, "ȫ�浿");
	list[0].grade = 4.3;

	int n = sizeof(list) / sizeof(list[0]);
	n = sizeof(list) / sizeof(struct student);
	printf("%d\n", n);

	/*for (int i = 0; i < n; i++){
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", list[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf("%lf", &list[i].grade);
	}*/
	for (int i = 0; i < n; i++) {
		printf("�й�: %d, �̸�: %s, ����: %.2f\n", list[i].number, list[i].name, list[i].grade);
	}
		



	return 0;
}