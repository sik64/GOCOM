#include <stdio.h>
//Int�� �迭��int�� �����͸� �޾Ƽ� �����Ͱ� �迭�� ���� ū ���� ����Ű�� �ϴ� �Լ��� �ϼ��Ͻÿ�.
void set_max_ptr(int m[], int size, int** pmax) {
    if (size <= 0) {
        *pmax = NULL; 
        return;
    }
    *pmax = &m[0]; 
    for (int i = 1; i < size; i++) {
        if (m[i] > **pmax) {
            *pmax = &m[i]; 
        }
    }
}
int main() {
    int m[6] = { 5,6,1,3,7,9 }; // �迭m ����߿� ���� ū���� pmax�� ����Ų��.
    int* pmax;
    set_max_ptr(m, 6, &pmax);

    return 0;
}