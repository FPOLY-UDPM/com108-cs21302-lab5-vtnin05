/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

int kiemTraNamNhuan(int nam) {
    // (Chia hết cho 400) HOẶC (Chia hết cho 4 VÀ không chia hết cho 100)
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1; // Đúng là năm nhuận
    } else {
        return 0; // Không phải năm nhuận
    }
}

int main() {
    int namHienTai;

    printf("Nhập vào một năm bất kỳ: ");
    scanf("%d", &namHienTai);

    if (kiemTraNamNhuan(namHienTai) == 1) {
        printf("Năm %d là NĂM NHUẬN.\n", namHienTai);
    } else {
        printf("Năm %d KHÔNG PHẢI là năm nhuận.\n", namHienTai);
    }

    return 0;
}