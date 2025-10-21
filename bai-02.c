// Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau.
// Ví dụ : N = 30 là số Sphenic vì 30 = 2×3×5. N = 60 không phải số Sphenic vì 60 = 2×2×3×5. Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?
#include <stdio.h>
#include <math.h>
int sphenic (long long so)  {
    int count = 0;
    for (long long i = 2; i <= sqrt(so); i++){
        if (so % i == 0){
            int bac = 0;
            while (so % i == 0){
                so /= i;
                bac++; // Nếu i hợp lệ và chia hết
                if(bac > 1) return 0;
            }
            count++;
            if(count > 3) return 0;
        }
    }
    if(so != 1) count++;
    return count == 3;
}

int main () {
    long long n;
    do {
        scanf("%lld", &n);
    }while (n < 2);

    if(sphenic(n)){
        printf("1");
    }else{
        printf("0");
    }
}