#include <stdio.h>
#include <math.h>

int uocle(long long n) {
    int can = sqrt(n);
    if(1ll * can * can == n){
        return 1;
    }else 
        return 0;
}

int main() {
    long long n;
    scanf("%lld", &n);
    if(uocle(n)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}