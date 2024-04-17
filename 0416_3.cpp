#include <stdio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

struct merchandise {
	int number;
	char name[10];
	int price;
};
int main() {
	struct merchandise merchanList[5] = {
		{1,"goods1",8000},
		{2,"goods2",8100},
		{3,"goods3",9000}
	};

	return 0;
}