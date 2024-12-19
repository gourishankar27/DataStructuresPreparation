/*
What are functions??? 
A function is a peace of code which performs a specific task.

types:
Modeular programming
Procedural Programming
*/
/*
Parameter passing methods:
    1.Pass by Value or call by value-
        In Pass by value any changes doen to Formal parameter will not reflect in Actual Parameter. 
    
    2.Call by address-
        Any changes did inside a function will modify the Actual Parametrs.
        It uses Pointers.
        ***It is More useful
    
    3.Call by reference-


*/
#include <iostream>
using namespace std;

int addition(int a, int b)      //Declaration of F  //Prototype or Signature of a function
{           
    int c = a+b;                //Definition of a Funtion
    return(c);
}

void swap_v(int a, int b) //Call by value
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}

void swap_a(int *a, int *b)  // Call by address
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}

void swap_r(int &a, int &b) //Call by reference
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}

int main()
{
    int x=10;                   //Parametres x,y are actual parameters, and
    int y=25;                   //Parameters a,b are called as Formal parametrs.

    int z = addition(x,y);      //function call
    cout<<z;

    swap_v(x,y); ////Call by value

    swap_a(&x,&y);// Call by address

    swap_r(x,y);//Call by reference
}