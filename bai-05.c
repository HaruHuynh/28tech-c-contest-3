// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N.
// Ví dụ : N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.
#include <stdio.h>
#include <math.h>

long long sumN (long long n) {
    int tong = 0;
    while(n > 0){
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

long long checkSNT (long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int congThuaSo (long long n) {
    int tong = 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            while (n % i == 0){
                tong += sumN(i);
                n /= i;
            }
        }
    }
    if(n != 1) tong += sumN(n);
    return tong;
}

int main () {
    long long n;
    scanf("%lld", &n);

    if(checkSNT(n)){
        printf("NO");
        return 0;
    }  

    int tongN = sumN(n);
    int tongThuaSo = congThuaSo(n);

    if(tongN == tongThuaSo){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}