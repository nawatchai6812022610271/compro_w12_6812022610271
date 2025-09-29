#include <stdio.h>
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  
    }
}
int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    doubleArray(a, size);
    // แสดงค่าหลังคูณ
    printf("After : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}