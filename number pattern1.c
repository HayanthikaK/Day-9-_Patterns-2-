#include <stdio.h>
int main() {
    int i, j, temp, num = 1;
    for(i = 0; i < 5; i++) {
        if(i % 2 == 0) {
            for(j = 0; j < 5; j++)
                printf("%2d ", num++);
        }
        else {
            int temp;
            temp = num + 4;
            for(j = 0; j < 5; j++)
                num++;
        }
        printf("\n");
    }
    return 0;
}
