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

	// �迭 ������
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
	//�Լ� ������
	//int sub(int, int); // �Լ������� ������ ����
	int (*pf)(int i, int j);
	int (*pf2)(int i, int j);
	pf = add;
	pf2 = sub;
	int result = pf(20, 10);
	printf("%d\n", result); //30
	result = pf2(20, 10);
	printf("%d\n", result); //10

	//�Լ��������� �迭
	int (*pf[2])(int, int) = { add, sub };
	//int res = pf[0](1, 1);

	//����
	int** dp; // ���� ������
	int* pa[10]; // ������ �迭
	int(*p)[3]; //  �迭 ������
	void(*f)(int a); // �Լ� ������

	// int�� �����Ϳ� ���� ������
	int n;
	int *pn = &n;
	int** ppn = &pn;

	// 5���� double�� �����͸� �����ϴ� �迭�� ����
	double* arrdouble[5];

	// char�� �μ��� ������ double���� ��ȯ�ϴ� �Լ��� ���� ������
	double (*pd)(char a);

	// 2���� short�� �μ��� ������ int���� ��ȯ�ϴ� �Լ��� ���� �������� �迭
	int (*pf[10])(short, short);

	// �ƹ��͵� ����Ű�� �ʴ� ������ p
	int *p = NULL;
	void* p;

	int i = 80;
	int* p = &i;
	int** dp = &p;
	**dp = 90;
	*p = 100;
	printf("%d %d %d", i, *p, **dp);
	//100 100 100


	char* a[] = {"����","�λ�","��õ","�뱸"};
	char** x;
	x = a;
	printf("%s\n", *x);

	int(*ppo)[3];
	sprintf("%p\n", ppo);
	int ppoo[3];
	sprintf("%p\n", ppoo);
	return 0;
}
//�ڵ��� �׽�Ʈ���̽� �з� �ϳ� �� �߰�
// �¿쾾 �ۼ��ؿ� �׽�Ʈ���̽� �˻� �� ����
// �׽�Ʈ���̽� 100�� �ۼ� ��ȹ ����
// ���� ��� ���ϱ�
// 