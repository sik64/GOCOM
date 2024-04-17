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
	// int를 메모리에 넣을 때는 1바이트 씩 나눠서 순서를 역순으로 넣는다.
	// 메모리에서 int값을 받을 때는 4바이트 메모리에서 역순으로 정리된 값을 다시 바이트 역순으로 복호화 한뒤 값을 반환
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