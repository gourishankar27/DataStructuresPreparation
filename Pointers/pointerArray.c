#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int A[5]={2,4,5,6,5};

    // printf("%d = %d \n",A, &(A[0]));
    // printf("%d = %d \n", A+1, &(A[1]));
    // printf("%d = %d \n", *(A+1), A[1]); 

    for(i=0;i<5;i++){
        printf(" Address = %d \n",A+i);
        printf(" Address = %d \n",&(A[i]));
        printf(" Value = %d \n", *(A+i));
        printf(" Value = %d \n", A[i]);

    }
}