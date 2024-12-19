#include <stdio.h>

int main(){
    int B[2][3];

    B[0][0] = 1;
    B[0][1] = 2;
    B[0][2] = 3;
    B[1][0] = 11;
    B[1][1] = 12;
    B[1][2] = 13;

    int i, j;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
    

    int (*p)[3] = B;    

    printf("B =  %d\n", B);
    printf("B+1 =  %d\n\n", B+1);

    printf("*(B) =  %d\n", *(B));
    printf("*(B)+1 =  %d\n", *(B)+1);
    printf("*(B)+2 =  %d\n\n", *(B)+2);

    printf("*(B+1) =  %d\n", *(B+1));
    printf("*(B+1)+1 =  %d\n", *(B+1)+1);
    printf("*(B+1)+2 =  %d\n\n", *(B+1)+2);

    printf("*(*(B)) =  %d\n", *(*(B)));
    printf("*(*(B)+1) =  %d\n", *(*(B)+1));
    printf("*(*(B)+2) =  %d\n\n", *(*(B)+2));

    printf("*(*(B+1)) =  %d\n", *(*(B+1)));
    printf("*(*(B+1)+1) =  %d\n", *(*(B+1)+1));
    printf("*(*(B+1)+2) =  %d\n", *(*(B+1)+2));

}