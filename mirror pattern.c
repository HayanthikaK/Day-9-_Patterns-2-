
#include <stdio.h>
int main() {
    int n ,i, j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <i; j++) {
          printf(" ");            
        }
        for ( int j=0;j <n -i ; j++){
            printf("* ");
        }
        printf("\n");}
     for (i = n-2; i >= 0; i--) {
        for (j = 0; j <i; j++) {
          printf(" ");            
        }
    for (int j=0;j <n -i ; j++){
         printf("* ");}
         printf("\n");}
         return 0;
    }