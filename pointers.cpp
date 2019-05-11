//
//  Pointers - Pointer is used to store address of a variable.
// Declaration - Data_type *Variable_name;

#include <iostream>
using namespace std;

int main()
{
    int a=100;
    int *ptr1;
    int **ptr2;
    ptr1=&a;                // This is referencing - to give address to a pointer.
    ptr2=&ptr1;
    
   cout<<"Address of A = "<<&a<<"\n";
    cout<<"Address of A = "<<ptr1<<"\n";
    cout<<"Value of A = "<<*ptr1<<"\n";         //This is dereferencing - to access value of that variable .
    cout<<"Address of A = "<<**ptr2<<"\n";      //if we use *ptr2 here then value of ptr1 will be printed which is address of a. And if we use ptr2 then value of ptr2 will be printed which is address of ptr1.
    
    
    /*
    cout<<"Address of A = "<<&a<<"\n";
    cout<<"Address of ptr1 = "<<&ptr1<<"\n";
    cout<<"Address of ptr2 = "<<&ptr2<<"\n";
    
    cout<<"Value of A = "<<a<<"\n";
    cout<<"Value of ptr1 = "<<ptr1<<"\n";
    cout<<"Value of ptr2 = "<<ptr2<<"\n";
    */
    
    
    
    return 0;
}
