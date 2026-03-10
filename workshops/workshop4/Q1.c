#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a ,b , Result;
  char line[100];
  
  fgets(line,sizeof(line),stdin);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(sscanf(line,"%f %f", &a , &b )!=2){  // sscanf cố đọc 2 số float từ chuỗi line // nếu đọc được khác 2 ( 0 và 1 ) --> input không hợp lệ 
  	printf("Invalid input ");
  }else{
  	Result = pow(a*a+b*b, 1.0/3.0);
  	printf("%.2f",Result);
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
