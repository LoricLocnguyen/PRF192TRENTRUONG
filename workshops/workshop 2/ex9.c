#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int socuatoi, socuamay;
	srand(time(NULL));
	socuamay =rand() % 10;
	printf("T co so tu (0-9) t thach m doan duoc : \n ");
	while(1){
	
	printf("Nhap so di ni : ");
	while(scanf("%d",&socuatoi)!=1||socuatoi<0){
		printf("Nhap lai di sai roi(0-9) ");
		while(getchar()!='\n');
	}
	
	if(socuatoi==socuamay){
		printf("Chuc mung ban da trung so ");
		break;
	}else if(socuatoi>socuamay){
		printf("M doan sai roi , hon so cua t nhieu  ,doan lai di \n ");
	}else{
		printf("Nho qua doan lai di \n ");
	}
}
	return 0;
}