#include <stdio.h>
#include <math.h>

int nt(long long n) {
    int cnt = 0; // Khoi tao bien dem
    for(int i = 2; i <= sqrt(n); i++){ // Duyet mang i xuat phat tu 2
        if(n % i == 0){ // Neu nhu n chia het cho i
            int mu = 0; // Khoi tao bien mu ban dau = 0
            while(n % i == 0){ // Neu n tiep tuc chia het cho i
                ++mu; // Tang bien mu len 1 don vi
                n /= i; // Thuc hien n chia i
            }
            if(mu >= 2) return 0; // Neu mu = 2 hoac mu > 2 -> Loai
            ++cnt; // Tang bien dem len 1 don vi
        }
    }
    if(n > 1) // Neu nhu con sot lai n 
        ++cnt; // Tiep tuc tang bien dem
    if(cnt == 3) // Neu bien dem = 3 -> DUNG, neu khong -> SAI
        return 1;
    else 
        return 0;
}

int main() {
    long long n;
    scanf ("%lld",&n);
    if (nt(n)) {
        printf("1\n");
    }else{
    printf ("0\n");
    }
    return 0;
}