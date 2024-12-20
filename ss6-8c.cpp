#include <stdio.h>

int main() {
    double principal, rate, months, interest, total;

    printf("Nhap so tien ban dau: ");
    scanf("%lf", &principal);
    printf("Nhap lai suat thang (%%): ");
    scanf("%lf", &rate);
    printf("Nhap so thang gui: ");
    scanf("%lf", &months);

    rate /= 100; // Chuyển từ % sang số thập phân
    interest = principal * rate * months;
    total = principal + interest;

    printf("Tien lai: %.3lf\n", interest);
    printf("Tien nhan duoc: %.3lf\n", total);

    return 0;
}
