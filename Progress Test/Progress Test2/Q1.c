#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n ;
  int invalid =0 ; 
  
  
  if(scanf("%d",&n)!=1||n<=0)
  invalid =1 ;
  
  if(invalid ==1){
  	printf("Not found\n ");
  	return 0;
  }
  int a[n];
  for(int i =0;i<n;i++)
  scanf("%d",&a[i]);
  int found =0 ;
  // duyet tung phan tu cua mang 
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid == 1 ){
  	printf("invalid input ");
  	return 0 ; 
  }
  for(int i = 0 ; i<n;i++)
  if(a[i]%2==0)
  {
  	  printf("%d ", i); // nhớ thêm dấu cách
  	  found = 1 ; // đánh dấu là có số chẵn 
  	  
  }
  if(found == 0) {           // ✅ sửa = thành ==
        printf("Not found\n");
    }



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
