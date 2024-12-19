#include <stdio.h>

#include <string.h>

int main(){
    char C[5];
    C[0]='J';
    C[1]='O';
    C[2]='H';
    C[3]='N';
    C[4]='\0'; 
    printf("%s \n", C);

    char *C2 = C;

    printf(" %c \n ", C2[0]);

    int len = strlen(C);
    printf("Length is %d \n", len);

    // We can also do :

    char S[] = "Hello World";
    printf("String = %s , Size = %d \n", S , sizeof(S));
    // printf("%s ", S[0]);  This will not work but insteed;
    char *P;
    P = S;
    // P[0] = 'A';  //Working
    printf("S    = %s \n", S);
    
    printf("S[0] = \" %c \" and and   \" %c \"     \" %c \"     \" %c \"  \n", S[0], S[4] ,S[5], S[6]);
    printf("P[0] = \" %c \" and and   \" %c \"     \" %c \"     \" %c \"  \n", P[0], P[4] ,P[5], P[6]);
    printf("*S   = \" %c \" and and   \" %c \"     \" %c \"     \" %c \"  \n", *S, *(S+4) ,*(S+5), *(S+6));
    printf("*P   = \" %c \" and and   \" %c \"     \" %c \"     \" %c \"  \n", *P, *(P+4) ,*(P+5), *(P+6));

    
}