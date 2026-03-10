#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
     float A ,B ,d,x1,y1,x2,y2 ;
     fflush(stdin);
     printf("");
    scanf("%f %f",&x1,&y1);
	 printf("");
	 scanf("%f %f",&x2,&y2);

	 
     

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  
  
   d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    if(d==0){
    	printf("%.4f\n",d);
    	printf("Points are coincident\n");
	}else{
		printf("%.4f\n",d);
	}
     
     
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
