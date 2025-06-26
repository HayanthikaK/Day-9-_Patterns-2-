#include <stdio.h>
int main() {
    int n ;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n*2-1 ; i++){
        int star = i<=n? i:2*n-i;
        for (int s=1 ; s<=n-star;s++){
            printf(" ");}
        for (int j=1 ; j<=star;j++){
            printf("*");}
            printf("\n");}

  
         return 0;
    }
