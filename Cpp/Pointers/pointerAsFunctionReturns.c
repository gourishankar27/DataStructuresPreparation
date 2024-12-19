#include <stdio.h>
#include <stdlib.h>

void helloWorld(){
    printf("hello World !! \n");
}

int *Add(int *a, int *b){
    int *d = (int *) malloc(sizeof(int)); 
    *d = (*a) + (*b);

    return d;
}

int main(){
    int a = 2,b = 4;
    printf("Size of integer is %d \n",sizeof(int));
    int *ptr = Add(&a,&b);
    helloWorld();
    printf("Addition is %d \n", *ptr);
}
