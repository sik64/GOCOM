#include <stdio.h>
int main() {
	int nIn = 9;
	char cChar = 'c';

	int *pnIn = &nIn;
	char* pcChar = &cChar;

	char cszName[10] = "eunsik";
	//char* pcszName = &cszName; // 에러
	char* pcszName = cszName;

	printf(" pnIn : %p \n", pnIn);
	printf(" pnIn + 1: %p \n", pnIn + 1);
	printf(" pcChar : %p \n", pcChar);
	printf(" pcChar + 1: %p \n", pcChar + 1);
	printf(" pcszName : %p \n", pcszName);
	printf(" pcszName + 1: %p \n", pcszName + 1);

	printf(" \n nIn : %d \n", *pnIn);
	printf(" nIn + 1 : %d \n", *pnIn + 1);
	printf(" cChar : %c \n", *pcChar);
	printf(" cChar + 1: %c \n", *pcChar + 1);
	printf(" cszName : %s \n", pcszName);
	printf(" cszName + 1: %s \n", pcszName + 1);
	//sz일 경우 ~의 값을 호출할때 * (에스터리스크)XX

	int* numPtr1 = NULL;    // 포인터에 NULL 저장
	printf("%p\n", numPtr1);

	//포인터와 문자열
	//포인터와 문자열 배열
	int i = 1;
	int* pi = &i;
	printf("i=%d pi=%p\n",i,pi);

	int v = 0;

	v = (*pi)++;
	printf("i=%d v=%d\n", i, v);
	//v = *pi++;
	//printf("i=%d v=%d\n", i, v);
	
	

	v = ++*pi;
	printf("v=%d \n",v);
	v = *++pi;
	printf("v=%d \n", v);

	printf("\n-----------------\n");

	int szArr[5] = { 0,2,4,8,16 };
	int* pszArr = szArr;
	printf("%d\n",*pszArr);
	printf("%d\n", *pszArr+1); //arr[0]+1 // 값에 + 1
	printf("%d\n", *(pszArr + 1));// arr[1] // 인덱스에 +1
	printf("%d\n", *(szArr + 1));
	printf("%d\n", *(szArr + 2));
	printf("%d\n", *(szArr + 3));
	printf("%p\n", szArr );

	return 0;
}