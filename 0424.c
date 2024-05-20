#include <stdio.h>
void set_max_ptr(int m[], int size, int** pmax);
int main() {
	int m[6] = { 5,6,1,3,7,9 }; // 배열m 요소중에 가장 큰값을 pmax가 가리킨다.
	int* pmax;
	set_max_ptr(m, 6, &pmax);
	printf("%d", *pmax);
	return 0;
}
void set_max_ptr(int m[], int size, int** pmax) {
	int max = 0;
	int maxi = 0;
	for (int i = 0; i < size; i++) {
		if (m[i] > max) {
			max = m[i];
			maxi = i;
		}
	}
	pmax = m + maxi;
	return pmax;
}