#include<stdio.h>
int main(){
	int n;
	int du;
	int sodao = 0;
	printf("Nhap n :");
	while(scanf("%d",&n)!=1||n<=0||n<10){
		printf("Nhap lai ");
     while (getchar() != '\n'); // xóa ký tự sai trong buffer

	}
	while(n!=0){
		du = n%10;
		sodao = sodao*10+du;
		n = n/10;		
	}
	    printf("So dao nguoc la: %d", sodao);
            return 0;
}