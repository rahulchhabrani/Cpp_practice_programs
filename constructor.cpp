//
//  Constructors - Since we have to create a extra function for intializing values. We can replace it by constructors that automatically calls member function when object is created.
/* Rules for constructors - 1. It is always made in public section.
                            2. It does not return any value.
                            3. It is never inherited.
                            4. It can not be virtual.
                            5. We can not refer constructor through its address.
                            6. We can use default arguments.
 */


// The below program is an example of default constructor.
#include <iostream>
using namespace std;


class test
{
    int a,b;
    
    public:
    
    test()
    {
        a=1;
        b=2;
    }
    
    void putval(void)
    {
        cout<<"a = "<<a<<"\n";
        cout<<"b = "<<b<<"\n";
    }
};

int main()
{
    test t1;
    
    t1.putval();
    
    return 0;
}
    
