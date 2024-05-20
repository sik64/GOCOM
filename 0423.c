#include <stdio.h>
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int main() {
	printf("hello");
	int i = 10;
	int* p = &i;
	int** q = &p;
	printf("%p\n", q); //000000000014FCF8
	printf("%p\n", *q); //000000000014FCD4
	printf("%p\n", **q); // 000000000000000A
	printf("%d\n", **q); // 10

	// 배열 포인터
	int* ap[10];
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int e = 50;
	int* pa[5] = { &a,&b,&c,&d,&e };

	char fruits[4][10] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};
	char* pszfruits[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};
	//함수 포인터
	//int sub(int, int); // 함수원형은 위에서 정의
	int (*pf)(int i, int j);
	int (*pf2)(int i, int j);
	pf = add;
	pf2 = sub;
	int result = pf(20, 10);
	printf("%d\n", result); //30
	result = pf2(20, 10);
	printf("%d\n", result); //10

	//함수포인터의 배열
	int (*pf[2])(int, int) = { add, sub };
	//int res = pf[0](1, 1);

	//문제
	int** dp; // 이중 포인터
	int* pa[10]; // 포인터 배열
	int(*p)[3]; //  배열 포인터
	void(*f)(int a); // 함수 포인터

	// int형 포인터에 대한 포인터
	int n;
	int *pn = &n;
	int** ppn = &pn;

	// 5개의 double형 포인터를 저장하는 배열의 선언
	double* arrdouble[5];

	// char형 인수를 받으며 double형을 반환하는 함수에 대한 포인터
	double (*pd)(char a);

	// 2개의 short형 인수를 받으며 int형을 반환하는 함수에 대한 포인터의 배열
	int (*pf[10])(short, short);

	// 아무것도 가리키지 않는 포인터 p
	int *p = NULL;
	void* p;

	int i = 80;
	int* p = &i;
	int** dp = &p;
	**dp = 90;
	*p = 100;
	printf("%d %d %d", i, *p, **dp);
	//100 100 100


	char* a[] = {"서울","부산","인천","대구"};
	char** x;
	x = a;
	printf("%s\n", *x);

	int(*ppo)[3];
	sprintf("%p\n", ppo);
	int ppoo[3];
	sprintf("%p\n", ppoo);
	return 0;
}
//코딩팀 테스트케이스 분류 하나 더 추가
// 승우씨 작성해온 테스트케이스 검사 및 수정
// 테스트케이스 100개 작성 계획 수립
// 배포 방식 정하기
// 