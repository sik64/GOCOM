#include <stdio.h>
typedef struct _point {
	int x, y;
}point;

int quadrant(point *p) {
	if (p->x > 0 && p->y > 0) {
		return 1;
	}
	else if(p->x < 0 && p->y > 0) {
		return 2;
	}
	else if (p->x < 0 && p->y < 0) {
		return 3;
	}
	else if (p->x > 0 && p->y < 0) {
		return 4;
	}
	else if (p->x == 0 && p->y == 0) {
		return 0;
	}
	else {
		return -1;
	}
}
int main() {
	point p;
	scanf_s("%d %d", &p.x, &p.y);
	printf("(%d %d)의 사분면 = %d",p.x,p.y,quadrant(&p));
	return 0;
}

