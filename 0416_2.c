#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
// �� ���� �Է¹޾� �Ÿ� ��� ����ü
struct point {
	int x;
	int y;
};
struct rectangle {
	struct point p1;
	struct point p2;
};
int main() {
	struct point p1 = { 2,2 };
	struct point p2 = {1, 1};
	/*printf("p1�� ��ǥ �Է� (x y) : ");
	scanf("%d %d", &p1.x,& p1.y);
	printf("p2�� ��ǥ �Է� (x y) : ");
	scanf("%d %d", &p2.x ,&p2.y);
	double distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	printf("%f\n", distance);*/

	struct rectangle rect1 = {
		.p1.x = 1,
		.p1.y = 1,
		.p2.x = 2,
		.p2.y = 2
	};
	struct point pp1 = { 1,2 };
	pp1.x = 2;
	struct point* ppp1 = &pp1;
	ppp1->x = 4;
	printf("%d", pp1.x);

	struct point pntlist[3] = {
		{1,1},
		{2,2},
		{3,3}
	};


	return 0;
}