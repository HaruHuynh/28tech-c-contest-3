// Hãy nhập vào N và liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng N và có chữ số cuối cùng lớn nhất. Bạn cũng cần in ra số lượng số thỏa mãn.
// Bài này cần dùng sàng mới không TLE
#include <stdio.h>
#include <math.h>

int snt (int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int check(int n){
    int r = n % 10;
    while(n) {
        if(n % 10 > r)
            return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    int n; 
    scanf("%d", &n);
    int dem = 0;
    for(int i = 2; i <=n ; i++){
        if(snt(i) && check(i)){
            printf("%d ", i);
            dem++;
        }
    }
    printf("\n");
    printf("%d", dem);
    return 0;
}