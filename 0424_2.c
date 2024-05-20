#include <stdio.h>
//Int형 배열과int형 포인터를 받아서 포인터가 배열의 가장 큰 값을 가리키게 하는 함수를 완성하시오.
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
    int m[6] = { 5,6,1,3,7,9 }; // 배열m 요소중에 가장 큰값을 pmax가 가리킨다.
    int* pmax;
    set_max_ptr(m, 6, &pmax);

    return 0;
}