/*
    Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ
    lớn nhất của 100 là 25
*/

#include <stdio.h>

int max(int i) {
    int max = 0; // cho max = 0 để max mang 1 giá trị
    if (max < i) max = i;
    return max;
}

int uocSoLeLonNhat(int n) {
    int kq = 0; // tương tự max
    for (int i = 1; i < n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            kq = max(i); // nếu n chia hết cho i và i là số lẻ => gọi hàm max()
        }   
    }
    return kq;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Uoc so le lon nhat cua %d la: %d", n, uocSoLeLonNhat(n));
    return 0;
}