#include <stdio.h>

int main() {
    float balance = 10000.0;
    float withdraw_amount;
    int choice;

    printf("\n");
    printf("=============================================\n");
    printf("||         ?? ATM MO PHONG ??               ||\n");
    printf("||-----------------------------------------||\n");
    printf("||   So du ban dau: %10.2f VND       ||\n", balance);
    printf("=============================================\n");

    while (1) {
        printf("\n");
        printf("============== MENU CHINH ===================\n");
        printf("  1??  Rut tien\n");
        printf("  2??  Kiem tra so du\n");
        printf("  3??  Thoat chuong trinh\n");
        printf("=============================================\n");
        printf("?? Nhap lua chon cua ban (1-3): ");

        /* CH?N NH?P CH? ? MENU */
        while (scanf("%d", &choice) != 1) {
            printf("? Loi! Chi duoc nhap so (1-3): ");
            while (getchar() != '\n');
        }

        if (choice == 3) {
            printf("\n=============================================\n");
            printf("?? Cam on ban da su dung ATM!\n");
            printf("?? Hen gap lai lan sau!\n");
            printf("=============================================\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("\n----------- ?? RUT TIEN ?? ------------------\n");
                printf("Nhap so tien muon rut: ");

                /* CH?N NH?P CH? + <= 0 */
                while (scanf("%f", &withdraw_amount) != 1 || withdraw_amount <= 0) {
                    printf("? So tien phai la SO va > 0. Nhap lai: ");
                    while (getchar() != '\n');
                }

                if (withdraw_amount > balance) {
                    printf("\n? GIAO DICH THAT BAI!\n");
                    printf("?? So du hien tai: %.2f VND\n", balance);
                } else {
                    balance -= withdraw_amount;
                    printf("\n? GIAO DICH THANH CONG!\n");
                    printf("?? So tien rut:    %.2f VND\n", withdraw_amount);
                    printf("?? So du con lai:  %.2f VND\n", balance);
                }
                break;

            case 2:
                printf("\n----------- ?? KIEM TRA SO DU ---------------\n");
                printf("?? So du hien tai cua ban la: %.2f VND\n", balance);
                break;

            default:
                printf("\n? LUA CHON KHONG HOP LE!\n");
        }

        if (balance <= 0) {
            printf("\n=============================================\n");
            printf("??  So du da het. Chuong trinh tu dong ket thuc!\n");
            printf("=============================================\n");
            break;
        }

        printf("\n=============================================\n");
        printf("Nhan ENTER de tiep tuc giao dich...\n");
        while (getchar() != '\n'); // d?n buffer
        getchar();                 // d?i Enter
    }

    return 0;
}
