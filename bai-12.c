// Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau. Hãy in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên a, b cho trước
// Gợi ý : Có ít nhất 3 ước nguyên tố khác nhau = Có ít nhất 3 thừa số nguyên tố khác nhau => Phân tích thừa số nguyên tố
#include <stdio.h>
#include <math.h>
int palindrome(int n) {
    int rev = 0, tmp = n;
    while(n){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if(tmp == rev)
        return 1;
    else 
        return 0;
}

int phanTichTS(int n) {
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)
        cnt++;
    if(cnt >= 3) 
        return 1;
    else
        return 0;
}

int main(){
    int a, b;
    scanf("%d%d", &a,&b);
    int ok = 0;
    for(int i = a; i <= b; i++){
        if(palindrome(i) && phanTichTS(i)){ 
            printf("%d ", i);
            ok = 1;
        }
    }
    if(ok == 0)
        printf("-1");
    return 0;
}