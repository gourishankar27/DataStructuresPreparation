#include <stdio.h>
#include <stdlib.h>

int SumOfArrayElements(int Arr[], int size){ // passing 'int Arr[]' or 'int* A' is same.
    int i,sum = 0;
    
    for(i=0;i<size;i++){
        sum +=Arr[i]; // Arr[i] or *(A+i)  .... its same
        // can also be writter as sum = sum + Arr[i]
        printf("%d :  %d  \n", i,sum);
    }

    return sum;

}

int main(){
    int A[] = {10, 30 ,20, 40, 5};
    int size = sizeof(A)/sizeof(A[0]); 
    int sum = SumOfArrayElements(A,size); // A or &A[0]  .... same 
    printf(" sum = %d ",sum);
}