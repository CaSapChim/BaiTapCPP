/**
 * 
    Liệt kê tất cả “ước số lẻ” của số nguyên dương n.
    Tính tích tất cả “ước số lẻ” của số nguyên dương n
*/

#include <stdio.h>

void uocSoLe(int n) {
    for (int i = 1; i < n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            printf("%d ", i);
        }
    }
}

int tichUocSoLe(int n) {
    int tich = 1;
    for (int i = 1; i < n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            tich *= i;
        }
    }
    return tich;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Cac uoc so le cua %d la: ", n);
    uocSoLe(n);
    printf("\nTich cua cac uoc so le la: %d", tichUocSoLe(n));
    return 0;
}