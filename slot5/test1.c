#include<stdio.h>
#include<math.h>
int main(){
	float  a ;
	float  b ;
	float  c ;
	float max ;
	printf("Nhap a : ",a);
	scanf("%f",&a);
	printf("Nhap b : ",b);
	scanf("%f",&b);
	printf("Nhap c : ",c);
	scanf("%f",&c);
	if(b>max)
	max =b;
	if(c>max)
	max = c;
	printf("Gia tri lo nhat la : %.2f",max);
	
	
}