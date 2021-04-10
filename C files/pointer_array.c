#include <stdio.h>

int main(void){
    int num[4] = {4, 6, 3, 2};
    int *a[4], a_0[num[0]], a_1[num[1]], a_2[num[2]], a_3[num[3]];
    a[0] = a_0;
    a[1] = a_1;
    a[2] = a_2;
    a[3] = a_3;

    for(int i=0; i< 4; i++){
        printf("Enter class %d student's age:\n", i+1);
        for (int j=0; j<num[i]; j++){
            scanf("%d", &a[i][j]);
            printf("class %d, student No.%d 's age is: %d\n", i, j+1, (*a[i])+j);
            printf("class %d, student No.%d 's age is: %d\n", i, j+1, a[i][j]);
        }
    }
}