// Đếm số lượng các số chính phương trong đoạn từ a tới b
#include <stdio.h>
#include <math.h>

void demChinhPhuong(long long a, long long b){
    long long start = ceil(sqrt(a)); //Làm tròn lên để nằm trong đoạn ab
    long long end = floor(sqrt(b)); //Làm tròn xuống để nằm rong đoạn ab

    if(start > end){ //Tức là không có số chính phương trong đoạn này
        printf("0\n");
        return;
    }

    long long count = 0;
    for(long long i = start; i <= end; i++){ //Khởi tạo i bằng start, xet trong đoạn từ start -> end
        count++;
    }
    printf("%lld", count);
}


int main (){
    long long a,b;
    scanf("%lld%lld", &a, &b);
    demChinhPhuong(a,b);
    return 0;
}