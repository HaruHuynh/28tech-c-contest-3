// Hãy phân tích một số nguyên dương N thành thừa số nguyên tố
#include <stdio.h>
#include <math.h>
void phantichthuaso (long long n) {
    int first = 1;
    for(long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            int bac = 0;
            while (n % i == 0){
                n /= i;
                bac++;
            }
            if (!first) printf("* ");
            printf("%lld^%d ", i,bac);
            first = 0;
        }
    }
    if (n != 1){
        if (!first) printf("* ");
        printf("%lld^1 ", n);
    }
}

int main () {
    long long n;
    scanf("%lld", &n);
    phantichthuaso(n);
    return 0;
}