#include<stdio.h>
#include<math.h>
int main(){
	int N;
	int t;
	printf("Nhap so dien: ", N);
	scanf("%d",&N);
	if(N>=100)
		t = N*950;
	else {
	if(N>=150)
	    t = N*1250;
	else 
	{
		
	if(N>=200)
	    t = N*1350;
    else{
    	t = N*1550;
	}
	
	} 
		
	}
	printf("So tien dien la: %.d", t1);
}