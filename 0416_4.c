#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592;

struct point {
	int x, y;
};
struct circle {
	struct point center;
	double radius;
};
// 구조체를 함수의 인수로 전달하는 경우 구조체의 내용이 복사된다.
//원의 면적을 계산하는 함수 
double area(struct circle c) {
	return pow(c.radius, 2) * PI;;
}
//원의 둘레를 계산하는 함수
double perimeter(struct circle c) {
	return c.radius*2*PI;
}
//원의 중심점을 출력하는 함수
void printCircleCenterPoint(struct circle c) {
	printf("Center of Circle : (%d,%d)\n", c.center.x, c.center.y);
}
int main() {
	//struct circle cir = { .center ={0,0}, .radius = 10};
	struct circle cir;
	cir.center.x = 0;
	cir.center.y = 0;
	cir.radius = 10;
	printf("Area of Circle : %lf\n",area(cir));
	printf("Perimeter of Circle : %lf\n", perimeter(cir));
	printCircleCenterPoint(cir);
	return 0;
}
