//
//  Destructor -  When we use constructor memory reserves some space, we use desrtructor to free that reserve space.
/*  Rules - 1. Same as the class name, but we use tilde "~" sign in front of it.
            2. No return type.
            3. Can not take arguments.
 */

#include <iostream>
using namespace std;

class test
{
    static int count;
    
public:
    test()
    {
        count++;
        cout<<count<<" object created \n";
    }
    
    ~test()
    {
        cout<<count<<" object destroyed \n";
        count--;
    }
};
 
 int test::count;                            // To use static data member it is necessary to declare it outside the class also.

int main()
{
    cout<<"Main Block \n";
    test t1;
    {
        cout<<"Block 1 \n";
        test t2,t3;
        cout<<"Exit from Block 1 \n";
    }
    cout<<"Exit from Main \n";
    
    return 0;
}


