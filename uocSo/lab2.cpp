/**
    Tính tổng tất cả “ước số” của số nguyên dương n.
    Tính tích tất cả “ước số” của số nguyên dương n.
*/

#include <stdio.h>

int tongUocSo(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int tichUocSo(int n) {
    int tich = 1;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tich *= i;
        }
    }
    return tich;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cac uoc so cua %d: %d\n", n, tongUocSo(n));
    printf("Tich cac uoc so cua %d: %d", n, tichUocSo(n));
    return 0;
}