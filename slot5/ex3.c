// Dùng if-else 
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float max ;
	printf("Nhap a b c : ",a,b,c);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b && a>c){
		max = a ;
}
	else{
		if(b>a && b<c){
			max = c;
		}
		printf("Gia tri lon nhat la %.2f",c);
}
}
