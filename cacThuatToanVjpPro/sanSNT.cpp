// Tìm tất cả các số nguyên tố dưới 1000000

#include <stdio.h>
#include <math.h>

int p[1000001];

void sanSNT() {
    /**
     * Duyệt qua tất cả các số từ 0 đến 1000000, cho tất cả
     * là một số nguyên tớ bằng cách gán = 1
    */
    for (int i = 0; i <= 1000000; i++) {
        p[i] = 1;
    }

    p[0] = p[1] = 0; // Số 0 và 1 ko phải là số ngto nên gán = 0

    for (int i = 2; i <= sqrt(1000000); i++) {
        // Nếu i là một snt
        if (p[i]) {
            // Duyệt tất cả các bội số của i và cho nó ko phải là snt (gán = 0)
            for (int j = i * i; j <= 1000000; j += i) {
                p[j] = 0;
            }
        }
    }
}

int main() {    
    sanSNT();
    int count = 0;
    for (int i = 2; i <= 1000001; i++) {
        if (p[i]) {
            count++;
        }
    }

    printf("Co tat ca cac %d cac so nguyen to.", count);
    return 0;
}