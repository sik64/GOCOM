#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
struct point {
	int x;
	int y;
};

struct student {
	int number; // �й�
	char name[10];// �̸�
	double grade; // ����
};
//1. ����ü�� �迭�� �������� �̾߱��غ���.
//	�迭�� ���� �ڷ���, ����ü�� �ٸ� �ڷ����� ���� �� �ִ�.
//2. ���Ҽ�, ��¥, ȭ���� ��ǥ, �簢�� ���� ǥ���ϴµ� �ʿ��� �����͸� �����غ���.
int main() {
	struct student std1 = { 2020037108,"moon",4.5 };
	/*printf("%d\n", std1.number);
	printf("%s\n", std1.name);
	printf("%d\n", std1.grade);*/

	struct student std2;
	std2.number = 2020037107;
	strcpy(std2.name, "ȫ�浿");
	std2.grade = 3.2;

	/*printf("%d\n", std2.number);
	printf("%s\n", std2.name);
	printf("%d\n", std2.grade);*/

	/*struct student std3 = {
		std3.number = 2020037109,
		std3.name = "�蹮",
		std3.grade = 99.2
	};*/

	struct student s = { 24, "Kim", 4.3};
	struct student* p;
	p = &s;
	printf("�й�=%d �̸�=%s ����=%.2f \n", s.number, s.name, s.grade);
	printf("�й�=%d �̸�=%s ����=%.2f \n", (*p).number, (*p).name, (*p).grade);
	printf("�й�=%d �̸�=%s ����=%.2f \n", p->number, p->name, p->grade);
	// ����ü �������� ��������� ���� �� ->
	// ����ü ������ ��������� ���� �� .
	return 0;
}