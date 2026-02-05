#include<stdio.h>
int main(){
	int n , bin =0  , rem =0  , place =1  ;
    printf("Nhap so decimal ");
	while(scanf("%d",&n)!=1||n<0){
		printf("Nhap lai ");
		while (getchar() != '\n');
	}	
	while(n!=0){
		rem = n%2;
		n = n/2;
		bin = bin + (rem*place);
		place = place * 10;
		
	}
	printf("Decimal to bin are : %d ",bin);
	return 0;
}