//
//  Constructors in Derived Classes -  Derived class constructor take values for itself and for base class constructors.

#include <iostream>
using namespace std;

class A
{
    int a;
    
    public:
    
    A(int x)
    {
        a=x;
        cout<<"A class constructor initialized \n";
    }
    
    void dispa(void)
    {
        cout<<"Value of A = "<<a<<"\n";
    }
};

class B
{
    int b;
    
public:
    
    B(int x)
    {
        b=x;
        cout<<"B class constructor initialized \n";
    }
    
    void dispb(void)
    {
        cout<<"Value of B = "<<b<<"\n";
    }
};

class C: public B,public A                           //Here multiple inheritanced is used. The constructor which will be called first will depend upon the header of Derived Constructor,in the sequence in which it is declared.
{
    int c;
    
    public:
    
    C(int x, int y, int z):A(x), B(y)                /* Here A is written first then B is written. It doesnt matter because it will be
                                                      initialized based upon header. Thus in this case first B class constructor will be executed and then A class constructor will be executed. */
    { 
        c=z;
        cout<<"C class constructor initialized \n";
    }
    
    void dispc(void)
    {
        cout<<"Value of C = "<<c<<"\n";
    }
};

int main()
{
    C obj(10,20,30);
    
    obj.dispa();
    obj.dispb();
    obj.dispc();
    
    return 0;
}




    
        
