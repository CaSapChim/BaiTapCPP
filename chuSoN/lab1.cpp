/**
    Hãy đếm số lượng chữ số của số nguyên dương n.
    Hãy tính tổng các chữ số của số nguyên dương n.
    Hãy tính tích các chữ số của số nguyên dương n.
*/

#include <stdio.h>

int tongChuSo(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int tichChuSo(int n) {
    int tich = 1;
    while (n > 0) {
        tich *= n % 10;
        n /= 10;
    }
    return tich;
}

int demChuSo(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);

    printf("%d co %d chu so.\n", n, demChuSo(n));
    printf("Tong cac chu so cua %d la: %d\n", n, tongChuSo(n));
    printf("Tich cac chu so cua %d la: %d\n", n, tichChuSo(n));

    return 0;
}
