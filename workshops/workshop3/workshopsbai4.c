#include<stdio.h>


void processor(int choice, int  A, int  B) {
	int SUM ;
	switch(choice){
	
	case 1 :
    SUM = A+B;
    printf("Ket qua la : %d \n ",SUM );
	break;
	case 2 : 
	SUM = A-B;
	printf("Ket qua la : %d \n ",SUM );
	break;
	case 3 :
	SUM = A*B;
	printf("Ket qua la : %d \n ",SUM );
	break;
	case 4 :
	if(B==0){
		printf("Khong the chia cho 0\n");
	}else{

	SUM = A/B ; 
	 printf("Ket qua la : %d \n ",SUM );
	
}
    break ;
}

}




void show_menu(){
	printf("1. Phep  cong (+)\n");
	printf("2. phep tru(-)\n");
	printf("3. phep nhan(*)\n");
	printf("4. phep chia(/)\n");
	printf("0. thoat khoi may tinh\n");
}

int main(){
	int A , B , SUM  , choice  ; 
	do {
		// hi?n menu 
		show_menu();
		scanf("%d",&choice);
      if(choice!=0){
	printf("Nhap A : ");
	while(scanf("%d",&A)!=1||A<0){
		printf("Nhap sai\n Nhap lai : ");
	while(getchar()!= '\n');
	}
	printf("Nhap B : ");
	while(scanf("%d",&B)!=1||B<0){
		printf("Nhap sai\n Nhap lai : ");
	while(getchar()!= '\n');
	}
	processor(choice, A , B  );
}
}while(choice!=0);
	printf("Thoat khoi chuong trinh ");
	
}

	
	
