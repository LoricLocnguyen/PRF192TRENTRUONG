#include<stdio.h>
int main(){

	int x;
	printf("Nhap x: ",x);
	scanf("%d",&x);
	int preX=x;
	if(x<0){
		x=-x;
	}
	printf("|%d| la  %d ",preX,x);
}