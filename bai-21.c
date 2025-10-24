// Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết cho bình phương của số nguyên tố đó.
// Hãy liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương a, b cho .
// Gợi ý : Có 1 thừa số nguyên tố có số mũ >= 2 là thỏa mãn

#include <stdio.h>
#include <math.h>
int snt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int goodNum(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
              mu++;
              n /= i;
            }
            if(mu >= 2)
            return 1;
        }
    }
    return 0;
}


int main() {
    int a,b;
    scanf("%d%d", &a,&b);
    for(int i = a; i <= b; i++){
        if(goodNum(i)) 
            printf("%d ", i);
    }
    return 0;
}
