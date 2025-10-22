#include <stdio.h>
#include <math.h>

int main() {
    long long a,b;
    scanf("%lld%lld", &a, &b);
    int canduoi = ceil(sqrt(a));
    int cantren = sqrt(b);
    printf("%d", cantren - canduoi + 1);
    return 0;
}