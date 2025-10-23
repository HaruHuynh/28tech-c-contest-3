// Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8.
// Hãy liệt kê các số đẹp trong đoạn giữa 2 số nguyên a, b cho trước
#include <stdio.h>
#include <math.h>

int palindrome (long long n){
    int rev = 0, tmp = n;
    while(n){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev == tmp;
}

int checkLocPhat(long long n){
    while(n){
        int lp = n % 10;
        if(lp == 6) return 1;
        n /= 10;
    }
        return 0;
}

int tongLocPhat(long long n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }    
    if(sum % 10 == 8) return 1;
    else return 0;
}

int main() {
    int a,b;
    scanf("%d%d", &a,&b);
    for(int i=a; i <= b; i++){
        if(palindrome(i) && checkLocPhat(i) && tongLocPhat(i)){
            printf("%d ", i);
        }
    }
    return 0;
}