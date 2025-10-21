#include <stdio.h>
#include <math.h>

int tongcs(int n){
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int smith(int n){
    int tmp = n;
    int sum1 = tongcs(n);
    int sum2 = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int d = tongcs(i);
            while(n % i == 0){
                sum2+= d;
                n /= i;
            } 
        }
    }
    if(tmp == n)
        return 0;
    if(n > 1)
        sum2 += tongcs(n);
    if(sum1 == sum2)
        return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    if(smith(n))
        printf("YES\n");
    else 
        printf("NO\n");
    return 0;
}