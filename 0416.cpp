#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
struct point {
	int x;
	int y;
};

struct student {
	int number; // 학번
	char name[10];// 이름
	double grade; // 학점
};
//1. 구조체와 배열의 차이점을 이야기해보라.
//	배열을 같은 자료형, 구조체는 다른 자료형을 묶을 수 있다.
//2. 복소수, 날짜, 화면의 좌표, 사각형 등을 표현하는데 필요한 데이터를 나열해보라.
int main() {
	struct student std1 = { 2020037108,"moon",4.5 };
	/*printf("%d\n", std1.number);
	printf("%s\n", std1.name);
	printf("%d\n", std1.grade);*/

	struct student std2;
	std2.number = 2020037107;
	strcpy(std2.name, "홍길동");
	std2.grade = 3.2;

	/*printf("%d\n", std2.number);
	printf("%s\n", std2.name);
	printf("%d\n", std2.grade);*/

	/*struct student std3 = {
		std3.number = 2020037109,
		std3.name = "김문",
		std3.grade = 99.2
	};*/

	struct student s = { 24, "Kim", 4.3};
	struct student* p;
	p = &s;
	printf("학번=%d 이름=%s 학점=%.2f \n", s.number, s.name, s.grade);
	printf("학번=%d 이름=%s 학점=%.2f \n", (*p).number, (*p).name, (*p).grade);
	printf("학번=%d 이름=%s 학점=%.2f \n", p->number, p->name, p->grade);
	// 구조체 포인터의 멤버변수를 얻을 때 ->
	// 구조체 변수의 멤버변수를 얻을 때 .
	return 0;
}