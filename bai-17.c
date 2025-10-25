// Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên không âm a và b
// Gợi ý : Khi tìm BCNN nên lấy a / UCLN * b tránh lấy a * b / UCLN vì a, b tới 10^12 có thể bị tràn long long khi nhân

#include <stdio.h>
#include <math.h>

long long UCLN (long long a, long long b){
    while(b != 0){
        long long r = a % b;
            a = b;
            b = r;    
    }
    return a;
}

long long BCNN (long long a, long long b){
    long long r = a / UCLN(a,b) * b;        
    return r;
}

int main() {
    long long a,b;
    scanf("%lld%lld", &a,&b);

    long long ucln = UCLN(a,b);
    long long bcnn = BCNN(a,b);

    printf("%lld %lld", ucln, bcnn);
}