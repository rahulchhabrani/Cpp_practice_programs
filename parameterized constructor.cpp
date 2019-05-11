//
//  Parameterized Constructor - A constructor with parameters is called as Parameterized Constructor.

#include <iostream>
using namespace std;

class test
{
    int a,b;
    
    public:
    test(int x, int y)
    {
        a=x;
        b=y;
    }
    
    void disp(void)
    {
        cout<<"Value of A: "<<a<<"\n";
        cout<<"Value of B: "<<b<<"\n";
    }
};

int main()
{
    test t1(100,200);      //We have to pass parameters while creating objects
    
    t1.disp();
    
    return 0;
}
        
