#include <stdio.h>
union uData {
	int a1;
	unsigned int a2;
	float f1;
	char szc1[4];
};
int main() {
	union uData uunit;
	//uunit.a2 = 2168471808;
	uunit.szc1[0] = 'A';
	uunit.szc1[1] = 'B';
	uunit.szc1[2] = 'C';
	uunit.szc1[3] = '\0';
	char tarr[4] = "ABC";
	printf("%d\n",uunit.a1);
	printf("%d\n", uunit.a2);
	printf("%.256f\n", uunit.f1);
	printf("%s\n", uunit.szc1);
	//4407873
	//434241
	//0000 0000 / 0100 0011 / 0100 0010 / 0100 0001
	//00        / 67        / 66        / 65
	// int�� �޸𸮿� ���� ���� 1����Ʈ �� ������ ������ �������� �ִ´�.
	// �޸𸮿��� int���� ���� ���� 4����Ʈ �޸𸮿��� �������� ������ ���� �ٽ� ����Ʈ �������� ��ȣȭ �ѵ� ���� ��ȯ
	enum days {SUN,MON,TUE,WEN,THU,FRI,SAT};
	enum days today;
	today = SUN;
	//today = SAT;
	printf("%d\n", today); // 0
	printf("%s\n", today);
	if (today == 0) {
		printf("SUNDAY!");
	}
	return 0;
}