//Tinh tien taxi
#include<stdio.h>

int main(){
    float soKm;
    int soPhutCho;
    
    // Nhập và kiểm tra số Km
    printf("Nhap vao soKm: ");
    int kq = scanf("%f",&soKm);
    if(kq!=1 || soKm<=0)
    {
        printf("Nhap sai!");
        return 0;
    }
    
    // Nhập và kiểm tra số phút chờ
    printf("Nhap vao so phut cho: ");
    kq = scanf("%d",&soPhutCho);
    if(kq!=1 || soPhutCho<0)
    {
        printf("Nhap sai!");
        return 0;
    }
    
    float tongTien;
    
    // Tính tiền theo quãng đường
    if(soKm<0.5)
        tongTien = 12000;
    else
    {
        if(soKm <=30)
            tongTien = 12000 + (soKm-0.5)*15000;
        else
            tongTien = 12000 + 29.5*15000 + (soKm-30)*12000;
    }
    
    // Tính phụ phí chờ (nếu chờ trên 5 phút)
    if(soPhutCho>5)
        tongTien = tongTien + (soPhutCho-5)*1000; //hoặc tongTien += (soPhutCho-5)*1000;
        
    // In kết quả ra màn hình
    printf("%-10s %-20s %-20s\n","So km","So Phut cho","Tong Tien");
    printf("%-10.1f %-20d %-20.0f",soKm,soPhutCho,tongTien);
    
    return 0;
}