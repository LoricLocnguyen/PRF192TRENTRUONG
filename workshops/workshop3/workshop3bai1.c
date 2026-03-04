#include<stdio.h>

int is_leap_year(int year){ 
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return 1; 
    else {
        printf("%d khong phai la nam nhuan\n", year);
        return 0; 	
    }
}

void get_days_in_month(int month, int year){
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d nam %d co 31 ngay", month, year);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d nam %d co 30 ngay", month, year);
            break;
        case 2:
            if(is_leap_year(year))
                printf("Thang %d nam %d co 29 ngay", month, year);
            else 
                printf("Thang %d nam %d co 28 ngay", month, year);
            break;
        default: 
            printf("Thang khong hop le!");  
    }
}

int main(){
    int month, year;
	
    while (1) {                                          // ✅ có dấu {
        printf("Nhap thang: ");
        if (scanf("%d", &month) == 1 && month >= 1 && month <= 12)
            break;
        printf("Thang khong hop le! Nhap lai.\n");
        while (getchar() != '\n');  
    }
    
    while (1) {    
        printf("Nhap nam: ");
        if (scanf("%d", &year) == 1 && year > 0)
            break;
        printf("Nam khong hop le! Nhap lai.\n");
        while (getchar() != '\n');  
    }

    get_days_in_month(month, year);
    return 0;
}