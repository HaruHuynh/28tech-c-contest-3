// Nhiệm vụ của bạn là hãy tìm số thuộc dãy số Fibonacci nhỏ nhất lớn hơn hoặc bằng số N đã cho. Biết một số đầu tiên trong dãy Fibonacci là : 1, 1, 2, 3, 5, 8, 13....
#include <stdio.h>
#define ll long long
ll findfiBo(ll n){
    // dùng để xử lý nhanh các trường hợp nhỏ (N = 1 hoặc N = 0) mà không cần vào vòng lặp
    if(n == 1) return 1;
    ll fn1 = 1, fn2 = 1, fn;
    for(int i = 2; i <= 92; i++){
        fn = fn1 + fn2;
        if(fn >= n) break;
        fn2 = fn1;
        fn1 = fn;
    }
    return fn;
}

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%lld", findfiBo(n));
}