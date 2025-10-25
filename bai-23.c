// Theo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố.
// Cho số nguyên dương chẵn N >=4 .
// Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N.
// Ví dụ N = 6 ta có 1 cặp số nguyên tố là 3 + 3 = 6.

#include <stdio.h>
#include <math.h>

int nt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void goldBach(int n){
    for(int p = 2; p <= n/2 ; p++){
        if(nt(p) && nt(n - p)){
            printf("%d %d\n", p, n - p);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        goldBach(n);
    }
    return 0;
}