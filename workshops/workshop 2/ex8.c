#include<stdio.h>
int main(){
	int a ,b , rem ;
	printf("Nhap a,b :");
	while(scanf("%d,%d",&a,&b)!=2||a<=0||b<=0){
		printf("Nhap lai: ");
	while (getchar() != '\n');
	}
	while(b!=0){
		rem = a%b;
		a=b;
		b = rem;
	}
	printf("UCLN cua a va b la: %d ",a);
	return 0;
}