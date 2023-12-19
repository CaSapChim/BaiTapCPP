#include <stdio.h>
#include <math.h>

int kiemTraSCP(int n) {
    if (sqrt(n) == (int) sqrt(n)) 
        return 1;
    else 
        return 0;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    kiemTraSCP(n) == 1 ? printf("%d la so chinh phuong", n) : printf("%d khong phai la so chinh phuong", n);
    return 0;
}