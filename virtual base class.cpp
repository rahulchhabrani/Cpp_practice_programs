//
//  Virtual Base Class - To solve DIAMOND PROBLEM which comes in Hybrid Inheritance we use Virtual Base Class.

#include <iostream>
using namespace std;

class A
{
    int a;
    
    public:
    void dispa()
    {
        a=10;
        cout<<"Class A = "<<a<<"\n";
    }
};

class B: public virtual A                   //We can interchange public and virtual i.e. class B: virtual public A
{
    int b;
    
public:
    void dispb()
    {
        b=20;
        cout<<"Class B = "<<b<<"\n";
    }
};

class C: virtual public A
{
    int c;
    
public:
    void dispc()
    {
        c=30;
        cout<<"Class C = "<<c<<"\n";
    }
};

class D: public B,public C                   //Multiple Inheritance or Virtual Inheritance
{                                              /* Since we have use virtual base class so class D will get only one
                                                copy of class A.    */
    int d;
    
public:
    void dispd()
    {
        d=40;
        cout<<"Class D = "<<d<<"\n";
    }
};

int main()
{
    D obj;
    
    obj.dispa();                            /* If we remove virtual keyword from class B and C then error will come on
                                             this line because D object will get two copies of class A.
                                             
                                             We can also solve this problem by using scope resolution
                                             i.e. obj.B::dispa();
                                                  obj.C::dispa();
                                             but it is a temporary soltion, thus we can solve this permenently by using virtual base class.
                                             */
    obj.dispb();
    obj.dispc();
    obj.dispd();
    
    return 0;
}
