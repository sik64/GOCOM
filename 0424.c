#include <stdio.h>
void set_max_ptr(int m[], int size, int** pmax);
int main() {
	int m[6] = { 5,6,1,3,7,9 }; // �迭m ����߿� ���� ū���� pmax�� ����Ų��.
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