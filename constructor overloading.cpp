//
//  Constructor Overloading - As we know that we can make function with same name but different parameters which is called function overloading. Similarly we can make multiple constructor by SAME NAME with DIFFRENT ARGUMENTS.

#include <iostream>
using namespace std;

class test
{
    int a,b;
    
    public:
    
    test();
    test(int x);
    test(int x,int y);
    
    void disp();
};

test::test()
{
    a=0;
    b=0;
}

test::test(int x)
{
    a=x;
    b=x;
}

test::test(int x,int y)
{
    a=x;
    b=y;
}

void test::disp()
{
    cout<<"Value of a = "<<a<<"\t";
    cout<<"Value of b = "<<b<<"\n";
}

int main()
{
    test A;
    test B(100);
    test C(100,200);
    
    cout<<"object A = ";
    A.disp();
    cout<<"object B = ";
    B.disp();
    cout<<"object C = ";
    C.disp();
    
    return 0;
}
