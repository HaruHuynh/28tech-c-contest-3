// Một số được gọi là lộc phát nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên hãy kiểm tra xem đó có phải số lộc phát hay không.
// Nếu đúng in ra 1, sai in ra 0.
// Gợi ý : Tách từng chữ số của N => nếu gặp 1 số khác cả 0, 6, 8 => return false

#include <stdio.h>
#include <math.h>

int locphat(long long n){
    while(n){
        int lp = n % 10;
        if(lp != 0 && lp != 6 && lp != 8){
            return 0;
        }
        n /= 10;
    }
        return 1;
}

int main () {
    long long n;
    scanf("%lld", &n);
    if(locphat(n)){
        printf("1");
    }else{
        printf("0");
    }
}