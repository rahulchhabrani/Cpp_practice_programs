//
//  Multiple Inheritance - In Multiple Inheritance One Derived class can have Multiple Base classes.

#include <iostream>
using namespace std;

class A
{
protected:          // We use protected to use members in other derived classes.
    int m;
    
public:
    void get_m(int);
};

void A:: get_m(int x)
{
    m=x;
}

class B
{
protected:
    int n;
    
public:
    void get_n(int);
};

void B:: get_n(int x)
{
    n=x;
}

class C:public A, public B          //Multiple Inheritance. We use comma to seprate base classes.
{
    int c;
    
public:
    void add();
    void display();
};

void C::add()
{
    c=m+n;                  // We are able to use m and n here since they are declared as protected.
}

void C::display()
{
    cout<<"Value of m = "<<m<<"\n";
    cout<<"Value of n = "<<n<<"\n";
    cout<<"Addition of m+n = "<<c<<"\n";
}

int main()
{
    C obj;
    
    obj.get_m(100);
    obj.get_n(200);
    obj.add();
    obj.display();
    
    return 0;
}
    
    
