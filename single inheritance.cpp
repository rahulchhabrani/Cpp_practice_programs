//
//  Single Inheritance - In single inheritance there is one base class which we use to derive new class.

// SYNTAX for inheritance  = class Derived_class_name: visibility_mode Base_class_name
#include <iostream>
using namespace std;

class A
{
    int a;                          //private members are never inherited.
    
public:
    void getval_a(int);     // To initialize value of a
    int get_a();            // To return value of a
};

class B: public A                   // if we do not use visibilty mode here then by default it is private.
{
    int b,c;
    
public:
    void getval_b(int);     // To initialize value of b
    void add();             // To add data member of A and data member of B in c.
    void dispval();
};

void A::getval_a(int x)
{
    a=x;
}

int A::get_a()
{
    return a;
}

void B::getval_b(int x)
{
    b=x;
}

void B::add()
{
    c=get_a();                  //We can also write c=get_a()+b;
    c=c+b;
}

void B::dispval()
{
    cout<<"Value of A = "<<get_a()<<"\n";      //Nesting of member function.
    cout<<"Value of B = "<<b<<"\n";
    cout<<"Value of C = "<<c<<"\n";
}

int main()
{
    int a,b;
    B obj;
    
    cout<<"Enter value of A : ";
    cin>>a;
    cout<<"Enter value of B : ";
    cin>>b;
    
    obj.getval_a(a);
    obj.getval_b(b);
    obj.add();
    obj.dispval();
    
    return 0;
}

