#include <stdio.h>
#include <string.h>
void get_two_int(int* px, int* py);
int x;
int y;
int main() {
	int* px = &x;
	int* py = &y;
	get_two_int(px, py);

	printf("x: %d\ny: %d", x, y);

	/*strcmp();
	strtok();
	strcat();
	strcpy();
	strlen();*/
	char* p;
	char s[] = "Hello";
	p = s + strlen(s) - 1;
	while (p >= s) {
		printf("%s \n", p);
		p--;
	}
	/*
	o
	lo
	llo
	ello
	Hello
	*/

	return 0;
}
void get_two_int(int* px, int* py) {
	printf("���� x�� �Է��Ͻÿ� : ");
	scanf_s("%d", px);
	printf("���� y�� �Է��Ͻÿ� : ");
	scanf_s("%d", py);
};
