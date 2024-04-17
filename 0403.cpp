#include <stdio.h>
int printArr(int* arrPointer, int n);
int printArrReverse(int* arrPointer, int n);
int main() {

	int nszArr[10] = {0,1,2,3,4,5,6,7,8,9};
	int* p = nszArr ;
	int n = sizeof(nszArr) / sizeof(int);

	printArr(p,n);
	printArrReverse(p,n);

	return 0;
}

int printArr(int* arrPointer, int n) {
	// 정방향 출력
	printf(" A[] = ");
	for (int i = 0; i < n; i++) {
		printf("%d ", *(arrPointer + i));
	}
	printf("\n");
	return 0;
}

int printArrReverse(int* arrPointer, int n) {
	//역방향 출력
	printf(" A[] = ");
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", *(arrPointer + i));

	}
	printf("\n");
	return 0;
}