#include <stdio.h>

int main(void){
    int N;
    printf("Enter the number:");
    scanf("%d", &N);
    for (int i = 1; i < N; i++){
        int flag = 0;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                flag = 1;
                break;
            }
        }  
        if (flag == 0){
            printf("Number: %d is a prime\n", i);
        }
    }
}