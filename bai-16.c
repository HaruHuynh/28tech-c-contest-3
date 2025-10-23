// Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại, đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch.
// Ví dụ : các số 36788766; 12345654322 là các số đẹp. Viết chương trình kiểm tra số đẹp theo tiêu chí trên.
#include <stdio.h>
#include <math.h>

int soDau (long long n){
    while (n >= 10){
        n /= 10;
    }
    return n;
}

int soCuoi (long long n){
    return n % 10;
}

int thuanNghich(long long n){
    int rev = 0, tmp = n;
    while(n){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev == tmp;
}

int inner_palindrome(long long n){
   if (n < 100) return 0; // không có phần giữa
    // p = 10^(số chữ số - 1) (lũy thừa 10 lớn nhất <= n)
    long long p = 1;
    while (p * 10 <= n) p *= 10;

    long long mid = (n % p) / 10;// bỏ đầu rồi bỏ cuối
    return thuanNghich(mid);
}

int main() {
    long long n;
    scanf("%lld", &n);

    int a = soDau(n), b = soCuoi(n);
    int dk1 = (a == 2*b) || (b == 2*a);    // chữ số đầu gấp đôi chữ số cuối hoặc ngược lại
    int dk2 = inner_palindrome(n);         // phần giữa là palindrome

    printf("%s\n", (dk1 && dk2) ? "YES" : "NO");
}