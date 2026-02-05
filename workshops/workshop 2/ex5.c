#include<stdio.h>
int main(){
	int n ;
	int sum = 0;
	printf("Nhap n ");
	while(scanf("%d",&n)!=1||n<0){
	printf("Nhap lai vi nho hon 0 :");
	 while (getchar() != '\n'); // xóa ký tự sai trong buffer
	}
      while(n!=0){
		if(n>0){
			sum = sum + n;
		}
		printf("Nhap tiep ");
		if(scanf("%d",&n)!=1){
			printf("Nhap sai , ket thuc chuong trinh ");
			return 0;
		}
	}
	 printf("Tong cac so nguyen duong la: %d", sum);
    return 0;
}