// Tìm ước số nguyên tố lớn nhất của một số nguyên dương.
// Gợi ý : Đáp án chính là thừa số nguyên tố cuối cùng
#include <stdio.h>
#include <math.h>

int find(int n){
    int max;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            max = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) max = n;
    return max;
}

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        printf("%d\n", find(n));
    }
}