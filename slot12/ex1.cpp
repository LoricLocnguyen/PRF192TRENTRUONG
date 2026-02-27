#include<stdio.h>

int tinhtong(int n ){
	int sum = 0 ;
    for(int i=1;i<=n; i++){
    	if(n % i==0)
    		 sum +=i; 
		}
		return sum;
	} 
	
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int kq = tinhtong (n);
	printf("Tong uoc so cua %d la %d",n,kq);
	return 0;
}
	
	
