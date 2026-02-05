#include <stdio.h>

int main() {
    /* int i =1,n;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", i);
        i++;
    }

     return 0; */
     int n;
     int dem = 0 ;
     int kq ;
     printf("Nhap n : ");
   	while(scanf("%d",&n)!=1||n<=0||n>1000){
   	printf("\nNhap lai n :  ");
   		 while (getchar() != '\n'); // xóa ký tự sai trong buffer

}

     while(dem<=10){
     kq = n*dem;
     printf("%d * %d = %d \n ",n,dem,kq);
     dem = dem+1;
 }
	 
}

