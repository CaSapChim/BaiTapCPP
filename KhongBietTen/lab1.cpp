/*
    Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao
    cho S(k) < n. Trong đó chuỗi S(k) được định nghĩa như sau : S(k) = 1 +
    2 + 3 + … + k
*/

#include <stdio.h>

int timK(int n) {
    int k = 0, sum = 0;
    for (int i = 1; i < n; i++) { 
        sum += i; 
        if (sum < n) {
            k++; 
        } 
        else 
            break;
    }
    return k;
}

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("So nguyen duong k lon nhat la: %d", timK(n));
    return 0;
}