#include <iostream>
using namespace std;

//structure is used for defining user defined data types.
//the size of structure is a total amount of memory consumed by it's members

struct rectangle {   //structure definition
    int length;        //2 bytes memory
    int breadth;       //2 bytes
};

struct students
{
    int rollNo;         //2 bytes
    char name[25];      //25 bytes 
    char dept[15];      //15 bytes
    char address[100];  //100 bytes
};

struct cards
{
    int face;
    int shape;
    int color;
}; //total size 2+2+2= 6 bytes

int main(){
    struct rectangle r; //structure declaration , r occupies 4 bytes

    //struct rectangle r = {10,5};  // Declaration and initialising

    r.length = 10;
    r.breadth = 5;
    cout<<r.length*r.breadth;
    
    
    struct students s;

    struct cards deck[52]; // side = 52*6 bytes

    //struct cards deck[52]={{1,0,0},{2,0,0}, ......}



    
    


}


