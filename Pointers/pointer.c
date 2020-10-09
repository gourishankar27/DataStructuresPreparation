#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 1025;
    int *p = &a;

    printf(" Address of a is %d \n", p);
    printf(" Value at a is %d \n", *p);

    printf(" Pointer arithmetic eg (p+1) = %d \n", p+1);

    printf(" Address of a = %d and Value stored at a = %d \n",p,*p);

    printf(" Size of \"integer\" on this Machine is %d \n",sizeof(int)); // " \ is an escape character "
    printf(" Size of \"float\" on this Machine is %d \n",sizeof(float));
    printf(" Size of \"char\" on this Machine is %d \n",sizeof(char));


    int *q = (int *)malloc(5*sizeof(int));
    printf(" Address of a is %d \n", p);
    printf(" Malloc function %d \n", q);

    // Character pointer 
    char c;
    char *p0 = (char *)(&a); //typecasting
    printf(" Address = %d and Value = %d \n",p0,*p0);
    // 1025 = 00000000 00000000 00000100 00000001

    /*here thoe the value is from a, but the pointer is of type char so, 
    sizeof(char) = 1. so here while "dereferencing" *p0 will only read first byte 
    which contains 00000001 = 1.
    */
}
