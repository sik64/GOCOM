#include <stdio.h>
int main() {

	int scores[6] = { 60,76,89,98,99,88 };

	scores[5] = 80;
	scores[1] = scores[0];

	int i = 5;
	scores[i] = 100;
	scores[i + 2] = 100;

	int index[6] = { 0,1,2,3,4,5 };
	scores[index[3]] = 100;

	int size = sizeof(scores) / sizeof(int);
	for (int i = 0; i < size; i++) {
		printf("%d ", scores[i]);
	}


	char cArr[5]; 
	double dArr[5];

	return 0;
}