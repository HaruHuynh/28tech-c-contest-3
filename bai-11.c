#include <stdio.h>
#include <math.h>

//Hàm kiểm tra số nguyên tố
int nt(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
//Hàm tổng chữ số nguyên tố và các chữ số là số nguyên tố, check luôn 2 yêu cầu này trong cùng 1 hàm vì nó đều tách từng chữ số
int csnt(int n){
    int sum = 0;
    while(n){
        int r = n % 10; // Phân tách từng số trong n
        sum += r;
        if(r != 2 && r != 3 && r != 5 && r != 7)
            return 0;// Nếu bất kì số nào trong n không nằm trong 2 3 5 7 -> loại
        n /= 10; // Chuyển sang số tiếp theo để so sánh
    }
    return nt(sum); // Gọi hàm ktra tổng có phải là SNT hay không
}

int main(){
    int a, b;
    scanf("%d%d", &a,&b);
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)){ // Vì hàm csnt tỷ lệ sai nhiều nên cần xét trước -> tiết kiệm tgian
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
