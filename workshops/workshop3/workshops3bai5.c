#include<stdio.h>

int is_prime(int n ){
	if(n<2){
		return 0;
		}
	for (int i =2 ; i<n;i++){
		if(n % i ==0){
			return 0 ;
		}
		}
		return 1 ;
	}
	
	
	int main(){
		int a , b , i ;
		printf("Nhap gia tri xuat phat a : ");
		while(scanf("%d",&a)!=1||a<2){
			printf("Nhap lai \n Nhap sai roi ");
			while(getchar()!='\n');
		}
		printf("Nhap gia tri xuat phat b : ");
		while(scanf("%d",&b)!=1||b<a){
			printf("Nhap lai \n Nhap sai roi ");
			while(getchar()!='\n');
	}
	for(i=a;i<=b;i++){
		if(i%2 ==0 && i!=2){
			continue;
		}
		if(is_prime(i)){
            printf("%d ", i);
	}
}
}