/**
 * 
 *     Liệt kê tất cả “ước số” của số nguyên dương n.
 *     Đếm số lượng “ước số” của số nguyên dương n.
*/

#include <stdio.h>

int demUocSo(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

void timUocSo(int n) {
    printf("Cac uoc so cua %d: ", n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    timUocSo(n);
    printf("Tong cac uoc so cua %d: %d", n, demUocSo(n));
    return 0;
}