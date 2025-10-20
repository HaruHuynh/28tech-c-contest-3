// Kiểm tra một số nguyên không âm N có phải là số nguyên tố hay không?
// Số nguyên tố là số nguyên dương chỉ có 2 ước là 1 và chính nó. Số 0, 1 không phải là số nguyên tố
#include <stdio.h>
#include <math.h>
int songuyento(long long  n) {
    if (n < 2) return 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0) 
        return 0;
    }
    return 1;
}

int main () {
    long long n;
    scanf("%lld", &n);
    if (songuyento(n)){
        printf("YES");
    }else{
        printf("NO");
    }
}
