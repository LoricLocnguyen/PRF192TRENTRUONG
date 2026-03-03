

// Luong c?a công nhân 35000/gi? = rate 
#include<stdio.h>

float calculate_salary(float hours, float rate){
	    float salary ;  // khai báo bi?n salary ? ngoài d? có th? nh?n giá tr? trong salary , n?u khai báo bi?n salary trong if s? không tính 
        if(hours<=40){       // salary= hours*rate 
        	  salary = hours*rate;
		}else if (hours>40){
			salary = 40*rate+(hours-40)*rate*1.5;
		}
		return salary;
}

int main(){
	float hours;
	float rate =35000  ;
    printf("So gio lam trong 1 tuan cua ban ");
    while(scanf("%f",&hours)!=1||hours<0){
    	printf("Nhap lai , nhap sai roi");
while(getchar() != '\n');  // 
}

float salary =  calculate_salary(hours , rate);
	printf("Tong tien luong cua nhan vien trong thang nay la %.2f",salary);
    
}