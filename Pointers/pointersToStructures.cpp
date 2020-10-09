#include <iostream>
using namespace std;

struct rectangle {   //structure definition
    int length;        //2 bytes memory
    int breadth;       //2 bytes
};



int main(){

    struct rectangle r = {10,5};  // Declaration and initialising
    //Every pointer takes 2 bytes in C++. 
    //Pointer always takes size equal to integer takes in any compiler

    struct rectangle *p=&r;

    r.length = 15;
    
    (*p).length = 20; //this is one way to access with pointer
    
    p -> length = 30; // this is another way to access with pointer

    //Creating the object dynamically in Heap using pointers
    
    

return 0;
}


