// Nhiệm vụ của bạn là in ra N số Fibonacci đầu tiên, một số đầu tiên trong dãy Fibonacci là 1, 1, 2, 3, 5, 8....
#include <stdio.h>

void inFibo (int n){
    if(n == 1) printf("1\n");
    else if(n == 2) printf("1\n 1\n");
    else {
        printf("1\n 1\n ");
        long long fn1 = 1, fn2 = 1;
        for(int i = 3; i <= n; i++) {
            long long fn = fn1 + fn2;
            printf("%lld\n ", fn);
            fn2 = fn1;
            fn1 = fn;
        }
    }
}

int main() {    
    int n;
    scanf("%d", &n);
    inFibo(n);
}