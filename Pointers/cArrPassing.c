#include <stdio.h>

void print(const char *P){

    // P[0] = 'A'; //Before const
    int i=0;
    // while (*(C+i) != '\0'){    // *(P+i) == P[i]
    while (*(P) != '\0'){
        // printf("%c",*(P+i));                
        printf("%c",*(P));
        // i++;
        P++;
    }
    printf("\n");
}


int main(){
    char C[] = "Hello";
    char *D = "String With Pointer";
    char *E = C;


    print(C); // Passing base address of character array C  
    print(D); // initializing pointer with string direcyly  works 
    print(E);
    print("Gourishankar"); // This also works
}