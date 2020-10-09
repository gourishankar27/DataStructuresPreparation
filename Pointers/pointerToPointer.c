#include <stdio.h>

int main(){
    int a = 1025;

    int *p = &a;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;

    printf(" *p = %d \n",*p);
    printf(" **q = %d \n", **q);
    printf(" *q = %d \n",*q);
    printf(" q = %d \n",q);
    printf(" ***r = %d \n",***r);
    printf(" **r = %d \n",**r);
    printf(" *r = %d \n",*r);
    printf(" r = %d \n",r);
    printf(" ****s = %d \n", ****s);
    printf(" ***s = %d \n", ***s);
    printf(" **s = %d \n", **s);
    printf(" *s = %d \n", *s);
    printf(" s = %d \n", s);

    printf("p = %d \n",p);
    printf("q = %d \n",q);
    printf("r = %d \n",r);
    printf("s = %d \n",s);
}