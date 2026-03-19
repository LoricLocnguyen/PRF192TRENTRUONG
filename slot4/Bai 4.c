#include <stdio.h>

int main() {
    char chuoi[1000] = "";
    
    printf("INPUT:\n");
    // Doc chuoi vao, ho tro doc ca khoang trang be mat
    fgets(chuoi, sizeof(chuoi), stdin);
    
    int so_tu = 0;
    int trong_tu = 0; // co dung de trang thai (flag) kiem tra co nam trong mot tu hay khong
    
    int i = 0;
    while (chuoi[i] != '\0') {
        // Loai bo ky tu xuong dong o cuoi do fgets bat vao
        if (chuoi[i] == '\n') {
            chuoi[i] = '\0';
            break;
        }
        
        // Kiem tra ky tu nay co phai la khoang trang hay khong (co hieu ca dau cach hoac khoang cach tab)
        if (chuoi[i] != ' ' && chuoi[i] != '\t') {
            if (trong_tu == 0) {
                // Gap ky tu khong phai khoang trang va dang khong o trong tu nao -> Bat dau mot tu moi
                trong_tu = 1;
                so_tu++;
            }
        } else {
            // Gap khoang trang -> Ket thuc mot tu hoac dang chuyen tiep o giua cac khoang trang
            trong_tu = 0;
        }
        i++;
    }
    
    printf("\nOUTPUT:\n");
    // In ra tong so tu da dem duoc
    printf("%d\n", so_tu);
    
    return 0;
}
