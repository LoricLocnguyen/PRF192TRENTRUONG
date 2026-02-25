#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
   int n;
    float S = 0.0f;
    float factorial = 1.0f;

    printf("Enter n: ");
    scanf("%d", &n);

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   if (n <= 0) {
        printf("Invalid input");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;          // tính i!
        S += 1.0f / factorial;   // cộng vào S
    }

    printf("%.3f\n", S);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
