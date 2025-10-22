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
    int tmp = n; //Cho so nhap vao n ban dau vao bien tam
    int sum1 = tongcs(n); //Goi ham tinh tong chu so cua n ban dau va them vao bien sum1
    int sum2 = 0; //Khoi tao bien sum2 = 0 
    for(int i = 2; i <= sqrt(n); i++){ //i khoi tao = 2 trong vong lap for de tim thua so 
        if(n % i == 0){
            int d = tongcs(i); //Goi ham tinh tong chu so de tinh tong cac thua so va thay vao bien d
            while(n % i == 0){
                sum2+= d; //Thay bien d vao bien sum2 voi tat ca thua so
                n /= i;
            } 
        }
    }
    if(tmp == n) //Neu n khong phai la so Smith vi n la SNT
        return 0; // Tra ve 0
    if(n > 1)
        sum2 += tongcs(n); //Neu con sot lai so n se cong don vao bien sum2
    if(sum1 == sum2) //Neu tong sum1 = sum 2 => DUNG
        return 1;
    else return 0; //Neu khong => SAI
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