// Cho 4 số nguyên dương x, y, z, n. Tìm số nguyên dương nhỏ nhất có n chữ số chia hết cho cả x, y, và z.
// Gợi ý : Tìm BCNN của 3 số x, y, z => Tìm số nhỏ nhất có n chữ số chia hết cho BCNN đó.
#include <stdio.h>
#include <math.h>
#define ll long long 

ll UCLN(ll a, ll b){
    while(b != 0){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll BCNN(ll a, ll b){
    return  a / UCLN(a,b) * b;
}

int main (){
    int x,y,z,n;
    scanf("%d%d%d%d", &x, &y, &z, &n);
    ll bc = BCNN(x, BCNN(y, z));
    ll tmp = (ll)pow(10, n - 1);
    // Tìm bội số nhỏ nhất của a mà ≥ b
    ll kq = (tmp + bc - 1) / bc * bc; // [(a + b - 1) / b] * b;
    if(kq < pow(10, n)) // Kiểm tra có còn đủ n chữ số không
        printf("%lld\n", kq);
    else 
        printf("-1"); // Không tồn tại số nào có n chữ số chia hết cho bc → in -1.
    return 0;
}