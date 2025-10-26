// Liệt kê những số là số nguyên tố nhỏ hơn N và có tổng các chữ số của nó là một số trong dãy số Fibonacci.

#include <stdio.h>
#include <math.h>
#define ll long long 

int checkFibo (long long n){
    if(n == 0 || n == 1) return 1;
    long long fn1 = 1, fn2 = 0;
    for(int i = 2; i <= 92; i++){
        long long fn = fn1 + fn2;
        if(fn == n) return 1; //La so Fibo
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

int snt (int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}


int check2 (int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(checkFibo(sum))
        return 1;
    else 
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        if(snt(i) && check2(i))
            printf("%d ", i);
    }
    return 0;
}