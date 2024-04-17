#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592;
// ������ ����
// ����ü �����͸� �Լ��� �μ��� �����ϴ� ��� ����ü�� ������� �ʰ� �ּҸ� �����Ѵ�.
// �ð��� ������ ���������� ���� ȸ�� ���ɼ��� �ִ�.
struct _point {
	int x, y;
};
typedef struct _point point;
//typedef ��� 1

typedef struct _circle {
	point center;
	double radius;
}circle;
// typedef ��� 2

//���� ������ ����ϴ� �Լ� 
double area(const circle *c) {
	return pow(c->radius, 2) * PI;;
}
//���� �ѷ��� ����ϴ� �Լ�
double perimeter(const circle *c) {
	return c->radius * 2 * PI;
}
//���� �߽����� ����ϴ� �Լ�
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
