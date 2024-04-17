#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592;
// 포인터 버전
// 구조체 포인터를 함수의 인수로 전달하는 경우 구조체는 복사되지 않고 주소만 전달한다.
// 시간과 공간을 절약하지만 원본 회손 가능성이 있다.
struct _point {
	int x, y;
};
typedef struct _point point;
//typedef 방법 1

typedef struct _circle {
	point center;
	double radius;
}circle;
// typedef 방법 2

//원의 면적을 계산하는 함수 
double area(const circle *c) {
	return pow(c->radius, 2) * PI;;
}
//원의 둘레를 계산하는 함수
double perimeter(const circle *c) {
	return c->radius * 2 * PI;
}
//원의 중심점을 출력하는 함수
void printCircleCenterPoint(const circle *c) {
	printf("Center of Circle : (%d,%d)\n", c->center.x, c->center.y);
}
int main() {
	circle cir;
	cir.center.x = 0;
	cir.center.y = 0;
	cir.radius = 10;
	printf("Area of Circle : %lf\n", area(&cir));
	printf("Perimeter of Circle : %lf\n", perimeter(&cir));
	printCircleCenterPoint(&cir);

	return 0;
}
