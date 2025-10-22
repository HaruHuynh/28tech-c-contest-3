// Gợi ý : Số chính phương có dạng i^2 => a <= i^2 <= b => √a <= i <= √b => Bạn chỉ cần duyệt từ √a tới √b và in ra bình phương của số i, khi đó sẽ không bị quá thời gian.
#include <stdio.h>
#include <math.h>

void inChinhPhuong(long long a, long long b){
    long long start = ceil(sqrt(a)); //Làm tròn lên để nằm trong đoạn ab
    long long end = floor(sqrt(b)); //Làm tròn xuống để nằm rong đoạn ab

    if(start > end){ //Tức là không có số chính phương trong đoạn này
        return;
    }

    for(long long i = start; i <= end; i++){ //Khởi tạo i bằng start, xet trong đoạn từ start -> end
        printf("%lld ", i*i);
    }
}

int main (){
    long long a,b;
    scanf("%lld%lld", &a, &b);

    inChinhPhuong(a,b);
    return 0;
}