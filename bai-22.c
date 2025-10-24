// Một số được coi là số đẹp khi nếu nó chia hết cho một số nguyên tố nào đó thì cũng phải chia hết cho bình phương của số nguyên tố đó. Hãy liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.
// Gợi ý : Bài này thì số thỏa mãn phải đảm bảo tất cả các thừa số nguyên tố có số mũ >= 2
	// •	Bắt buộc tất cả thừa số nguyên tố đều phải có mũ ≥ 2.
	// •	Nếu có bất kỳ thừa số nào mũ = 1 thì loại.

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
            if(mu < 2)
            return 0;
        }
    }
    if(n > 1) return 0;
    return 1;
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
