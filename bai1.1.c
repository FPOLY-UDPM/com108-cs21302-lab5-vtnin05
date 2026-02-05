// VÍ DỤ
// XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ

#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("Nhập số nguyên 1: ");
    scanf("%d", &a);
    printf("Nhập số nguyên 2: ");
    scanf("%d", &b);
    printf("Nhập số nguyên 3: ");
    scanf("%d", &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Giá trị lớn nhất là: %d\n", max);

    return 0;
}