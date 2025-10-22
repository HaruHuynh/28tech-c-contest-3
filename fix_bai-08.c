#include <stdio.h>
#include <math.h>

int main() {
    long long a,b;
    scanf("%lld%lld", &a,&b);
    // Dùng ceil để làm tròn a, tránh nhận số nằm ngoài đoạn a-b
    for(int i = ceil(sqrt(a)); i <= sqrt(b); i++){
        printf("%lld ", 1ll * i * i);
    }
    return 0;
}