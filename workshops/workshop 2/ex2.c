#include<stdio.h>
#include<math.h>
int main(){
	float  n;
	int count = 0;
   while(count<5){
   	printf("Nhap vao n ");
	while(scanf("%f",&n)!=1||n<=0||n>1000){
		printf("\nNhap lai n :  ");
		fflush(stdin); // xoa vung dem 
		// while(getchar()!='\n'); / c2 
	}
	printf("Can bac 2 la : %.2f\n",sqrt(n));
	count++;
   }
   	printf("\nDa xong , xuat sac");
}