#include <stdio.h>
#include <math.h>

int kiemTraSNT(int n) {
    if(n < 2) return 1;
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    kiemTraSNT(n) == 0 ? printf("%d la mot so nguyen to", n) : printf("%d khong phai la so nguyen to", n);
}