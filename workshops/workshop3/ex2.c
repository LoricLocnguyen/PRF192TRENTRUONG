#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // Nhập n lần đầu (bắt buộc nhập ít nhất 1 lần)
    do {
        printf("Nhap n: ");
        if (scanf("%d", &n) != 1) {
            printf("Nhap sai, ket thuc chuong trinh\n");
            return 0;
        }
        if (n < 0) {
            printf("Nhap lai vi nho hon 0!\n");
        }
    } while (n < 0);

    // Vòng lặp nhập tiếp
    do {
        if (n > 0) {
            sum += n;
        }

        printf("Nhap tiep: ");
        if (scanf("%d", &n) != 1) {
            printf("Nhap sai, ket thuc chuong trinh\n");
            break;
        }

    } while (n != 0);

    printf("Tong cac so nguyen duong la: %d\n", sum);
    return 0;
}
