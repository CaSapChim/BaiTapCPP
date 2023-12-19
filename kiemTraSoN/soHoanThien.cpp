#include <stdio.h>

int kiemTraSHT(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    if (sum == n) 
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    kiemTraSHT(n) == 1 ? printf("%d la mot so hoan thien", n) : printf("%d khong phai la so hoan thien", n);
    return 0;
}