// Kiểm tra một số nguyên có phải là số chính phương hay không?
#include <stdio.h>
#include <math.h>

int soChinhPhuong(long long n){
    int can = sqrt(n);
    if(1ll * can * can == n)
        return 1;
    else
        return 0;
}

int main() {
    long long n;
    scanf("%lld", &n);
    if(soChinhPhuong(n)){
        printf("YES");
    }else{
        printf("NO");
    }
}