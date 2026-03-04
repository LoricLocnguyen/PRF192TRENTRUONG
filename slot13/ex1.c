#include<stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int countPrimes(int *p, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isPrime(*p)) count++;
        p++;
    }
    return count;
}

void inputArr(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void outputArr(int a[], int n){
    printf("Mang vua nhap: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int a[100], n;
    
    printf("Nhap n: ");
    scanf("%d", &n);
    
    inputArr(a, n);
    outputArr(a, n);
    
    int *p = a;
    printf("\nSo nguyen to trong mang: %d", countPrimes(p, n));
    
    return 0;
}