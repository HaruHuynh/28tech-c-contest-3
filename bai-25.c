// Hãy liệt kê các cặp số nguyên tố cùng nhau và có giá trị khác nhau trong đoạn [a,b] theo thứ tự từ nhỏ đến lớn.
// 2 số được coi là nguyên tố cùng nhau nếu ước chung lớn nhất là 1.
#include <stdio.h>

#define ll long long 

int ucln(int a, int b){
    while(b){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        for(int j = i + 1; j <= b; j++){
            if(ucln(i, j) == 1){
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    return 0;
}
