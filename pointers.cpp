//Pointer is an address variable that meant for storing address of data. not data itself
//Normal variables are data variables, but the pointers are data variables 
// and pointers are used for indirectly accessing the data. 

/*program resides in the main memory. The main memory is divided into 3 sections 
 1.Code Section
 2.Stack 
 3.Heap 

 program can directly access Code section and stack but it cannot directly access Heap., 
 So Heap memory is external to the program. To access heap memory, Program needs pointers. 

 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int a=10,b=100;       //Data variable 
    int *p,*q;        //Address variable
    p = &a;         // this is initialization 
    q=&b;

    //Whenever you declare something, That definitly takes place in stack
    cout<< *p ;
    cout<<"\n";
    cout<<p;
    cout<<"\n";
    cout<<*q;
    cout<<"\n";
    cout<<q;

    //To Access Heap memory,
    int *h;
    h = new int[5];

    printf("%d",h);


    return 0;
}
