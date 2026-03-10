#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    printf("INPUT:\n");
    
    int a[100][100];
    int rows = 0, cols = 0;
    char line[1000];
    int invalid = 0;
    
    while(fgets(line, sizeof(line), stdin) && line[0] != '\n'){
        cols = 0;
        char *token = strtok(line, " \n");
        while(token != NULL){
            // kiểm tra từng ký tự có phải số không
            int isValid = 1;
            int k = 0;
            if(token[0] == '-') k = 1; // cho phép số âm
            for(; token[k] != '\0'; k++){
                if(token[k] < '0' || token[k] > '9'){
                    isValid = 0;
                    break;
                }
            }
            if(!isValid){
                invalid = 1;
                break;
            }
            a[rows][cols++] = atoi(token);
            token = strtok(NULL, " \n");
        }
        if(invalid) break;
        rows++;
    }

    printf("\nOUTPUT:\n");
    
    if(invalid){
        printf("Invalid input");
    } else {
        for(int i = 0; i < rows; i++){
            int total = 0;
            for(int j = 0; j < cols; j++)
                total += a[i][j];
            printf("%d\n", total);
        }
    }
    
    system("pause");
    return 0;
}