// Kiểm tra xem một số có số lượng ước số của nó là số lẻ.
// Gợi ý : số có số lượng ước là số lẻ chính là số chính phương
#include <stdio.h>
#include <math.h>

int uocSoLe(long long n){
    int can = sqrt(n);
    if(1ll * can * can == n)
        return 1;
    else
        return 0;
}

int main() {
    long long n;
    scanf("%lld", &n);
    if(uocSoLe(n)){
        printf("YES");
    }else{
        printf("NO");
    }
}