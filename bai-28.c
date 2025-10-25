// Nhiệm vụ của bạn là hãy tìm số thuộc dãy số Fibonacci nhỏ nhất lớn hơn hoặc bằng số N đã cho. Biết một số đầu tiên trong dãy Fibonacci là : 1, 1, 2, 3, 5, 8, 13....
#include <stdio.h>
#define ll long long
ll fiBo(ll n){
    ll fn1 = 1, fn2 = 1;
    // dùng để xử lý nhanh các trường hợp nhỏ (N = 1 hoặc N = 0) mà không cần vào vòng lặp
    if(n <= 1) return 1;
    while(1){
        ll fn = fn1 + fn2;
        if(fn >= n) return fn;
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%lld", fiBo(n));
}