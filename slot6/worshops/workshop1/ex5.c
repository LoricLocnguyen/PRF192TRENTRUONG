#include <stdio.h>

int main() {
    float km;
    int thoigiancho;
    long tien, tiencho, tongtien;

    do {
    printf("Nhap quang duong (km): ");
    scanf("%f", &km);

    if (km < 0 && km == 0 ) {
        printf("Khong phai la so duong, vui long nhap lai!\n");
    } else {
        break;
    }

} while (1);

do {
    printf("Nhap thoi gian cho (phut): ");
    scanf("%d", &thoigiancho);

    if (thoigiancho < 0 && thoigiancho ==0 ) {
        printf("Khong phai la so duong, vui long nhap lai!\n");
    } else {
        break;
    }

} while (1);


            
    

    if (km <= 0.5)
        tien = 12000;
    else if (km <= 30)
        tien = 12000 + (km - 0.5) * 15000;
    else
        tien = 12000 + 29.5 * 15000 + (km - 30) * 12000;

    if (thoigiancho > 5)
        tiencho = (thoigiancho - 5) * 1000;
    else
        tiencho = 0;

    tongtien = tien + tiencho;

    printf("%-20s %-20s %-20s\n", "So km", "So phut cho", "Tong tien");
    printf("%-20.2f %-20d %-20ld \n",km,thoigiancho,tongtien);
    
    return 0;

}
