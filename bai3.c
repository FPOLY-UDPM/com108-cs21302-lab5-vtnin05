/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

void hoanVi(int *pa, int *pb) {
    int temp; // Biến tạm (giống như cái cốc không)
    
    temp = *pa; // Bước 1: Giữ giá trị của a vào cốc tạm
    *pa = *pb;  // Bước 2: Lấy giá trị của b đổ vào a
    *pb = temp; // Bước 3: Lấy giá trị trong cốc tạm đổ vào b
}

int main() {
    int a, b;

    printf("Nhập a: "); scanf("%d", &a);
    printf("Nhập b: "); scanf("%d", &b);

    printf("\nTrước khi hoán vị: a = %d, b = %d\n", a, b);

    hoanVi(&a, &b);

    printf("Sau khi hoán vị: a = %d, b = %d\n", a, b);

    return 0;
}

