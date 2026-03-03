#include <stdio.h>

float calculate_taxi_fare(float distance) {
    float tongtien;

    if (distance < 1) {
        tongtien = 15000;
    } 
    else if (distance <= 30) {
        tongtien = 15000 + 12000 * (distance - 1);
    } 
    else {
        tongtien = 15000 + 12000 * 29 + 10000 * (distance - 30);
    }

    return tongtien;
}

int main() {
    float distance, tongtien;

    printf("So km di duoc la: ");
    
    while (scanf("%f", &distance) != 1 || distance < 0) {
        printf("Nhap lai: ");
        while (getchar() != '\n'); // Xóa b? d?m
    }

    tongtien = calculate_taxi_fare(distance);

    printf("Tong tien taxi: %.0f VND\n", tongtien);

    return 0;
}