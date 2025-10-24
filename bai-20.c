// Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. Ví dụ n = 28, k = 3 ta có kết quả là 7 vì 28 = 2x2x7
#include <stdio.h>
#include <math.h>

long long thuaSoNT(long long n, long long k){
    long long dem = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0){
            while(n % i == 0){
                dem++;
                if(dem == k) return i;
                n /= i;
            }
        }
    }
    if(n > 1){
        dem++;
        if(dem == k) return n;
    }
    return -1;
}

int main() {
    long long n, k;
    scanf("%lld%lld" ,&n, &k);
    printf("%lld", thuaSoNT(n,k));
    return 0;
}