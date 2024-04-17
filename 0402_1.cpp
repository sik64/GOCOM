#include <stdio.h>
int swap(int *px, int *py) {
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	return 0;
}

int main() {
	int x = 4;
	int y = 2;
	printf("before // x:%d y:%d\n",x,y);
	swap(&x, &y);
	printf("after  // x:%d y:%d\n", x, y);
	return 0;
}
