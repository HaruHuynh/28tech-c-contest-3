// Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại, đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch.
// Ví dụ : các số 36788766; 12345654322 là các số đẹp. Viết chương trình kiểm tra số đẹp theo tiêu chí trên.
#include <stdio.h>

int tn(long long n) {
    long long tmp = n, lat = 0;
    while(n){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return tmp == lat;
}

int check(long long n){
    int last = n % 10;
    long long rev = 0;
    n /= 10;
    while(n >= 10){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if((n * 2 == last || last * 2) || tn(rev))
        return 1;
    else 
        return 0;
}

int main () {
    long long n;
    scanf("%lld", &n);
    if(check(n)) printf("YES\n");
    else printf("NO\n");
    return 0;
}