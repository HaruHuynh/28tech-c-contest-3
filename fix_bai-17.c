// Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên không âm a và b
// Gợi ý : Khi tìm BCNN nên lấy a / UCLN * b tránh lấy a * b / UCLN vì a, b tới 10^12 có thể bị tràn long long khi nhân
#include <stdio.h>
#include <math.h>
#define ll long long

//Greatest common divisor
ll gcd(ll a, ll b){
    while(b != 0){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm (ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll a,b;
    scanf("%lld %lld", &a ,&b);
    printf("%lld %lld", gcd(a, b), lcm(a, b));
    return 0;
}