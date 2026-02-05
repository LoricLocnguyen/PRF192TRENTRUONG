#include<stdio.h>
int main(){
	int n ;
	int a = 0  ;
	printf("Nhap n : ");
	while(scanf("%d",&n)!=1||n<0){
		printf("Nhap lai ");
	 while (getchar() != '\n'); // xóa ký tự sai trong buffer
	}
    while(n>=a*a){
    	if(a*a==n){
    		printf("La so chinh phuong\n");
    		return 0;
		}
	a++;	
}
  printf("Khong phai la so chinh phuong ");
  return 0; 
}