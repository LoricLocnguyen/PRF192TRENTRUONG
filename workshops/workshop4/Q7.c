#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    printf("INPUT:\n");
    
    int n;
    scanf("%d", &n);
    
    printf("\nOUTPUT:\n");
    
    int row = 1;
    while(row <= n){
        // in khoảng trắng
        int space = n - row;
        while(space > 0){
            printf(" ");
            space--;
        }
        // in dấu *
        int star = 2 * row - 1;
        while(star > 0){
            printf("*");
            star--;
        }
        printf("\n");
        row++;
    }
    
    printf("\n");
    system("pause");
    return 0;
}