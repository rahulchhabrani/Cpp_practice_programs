//
// Reference variable - using reference variable we can have two variable names for single memory location.
/* It is different from pointers because -  1. It is initialized at the point of declaration.
                                            2. It cannot be null.
                                            3. You cannot make array of reference variable.
 */

#include<iostream>
using namespace std;

int main()
{
    int a=100;
    int &ref=a;
    
    cout<<"Value of a = "<<a<<" \n";
    cout<<"Value of ref = "<<ref<<" \n";
    
    cout<<"Address of a = "<<&a<<" \n";
    cout<<"Address of ref = "<<&ref<<" \n";

    return 0;
}
    
