/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

int timMax(int so1, int so2, int so3) { 
    int max = so1;

    if (so2 > max) {
        max = so2;
    }
    if (so3 > max) {
        max = so3;
    }
    return max;
} 
    
int main() {
    int a, b, c;

    printf("Nhập số thứ nhất: "); scanf("%d", &a);
    printf("Nhập số thứ hai: "); scanf("%d", &b);
    printf("Nhập số thứ ba: "); scanf("%d", &c);

    int soMax = timMax(a, b, c);
    printf("Số lớn nhất trong 3 số %d, %d, %d là: %d\n", a, b, c, soMax);
    
    return 0;
}