#include <stdio.h>
int fileopen() {
	FILE* fp = NULL;
	int c;
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");
	while ((c = fgetc(fp)) != EOF)
		putchar(c);
	fclose(fp);
	return 0;
}
int filewrite() {
	FILE* fp = NULL;
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fclose(fp);
	return 0;
}
int main(void)
{
	fileopen();
	filewrite();
	return 0;
}
