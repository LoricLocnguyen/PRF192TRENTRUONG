#include<stdio.h>
#include<math.h>
int main(){
	float n;
		printf("Nhap n:");
		while(scanf("%f",&n)!=1||n<=0||n>1000){	
			printf("Nhap n lai:");
		 while (getchar()!='\n'); // xóa ký tự sai trong buffer
		}
	printf("Can bac 2 la : %.2f ",sqrt(n));
	
	/*float n ; 
	printf("Nhap vao n :");
	while(scanf("%f",&n)!=1||n<=0||n>1000){
		printf("Nhap lai n :  ");
		fflush(stdin); // xoa vung dem 
		// while(getchar()!='\n'); / c2 
	}
	printf("Can bac 2 la : %.2f",sqrt(n));
	*/
} 