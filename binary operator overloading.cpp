//
//  Binary Operator Overloading - In Binary operator overloading we need two operands.

#include <iostream>
using namespace std;

class test
{
    int a,b;
    
    public:
    test()                                  //default constructor
    {
        a=0;
        b=0;
    }
    
    test(int x,int y)                       //parameterized constructor
    {
        a=x;
        b=y;
    }
    
    test operator+(test);                   // In Binary operator overloating we need one argument if it is a member function else if it is a friend function then we will need two arguments.
    
    void disp();
};

test test::operator +(test t)           // here 1st test is Return_type and 2nd test is Class_name.
{
    test temp;
    temp.a=a+t.a;                       //here a = 10 and t.a = 30
    temp.b=b+t.b;                       //here a = 20 and t.a = 40
    
    return temp;
}

void test::disp()
{
    cout<<"Value of A = "<<a<<"\t";
    cout<<"Value of B = "<<b<<"\n";
}

int main()
{
    test t1,t2,t3;                      // Since we have not given any parameters therefore default constructor will be called.
    
    t1=test(10,20);                     // We have called this in explicit way. Here it is not return type beacuse constructor does not return value.
    t2=test(30,40);
    t3=t1+t2;
    
    cout<<"For t1 : ";
    t1.disp();
    cout<<"For t2 : ";
    t2.disp();
    cout<<"For t3 : ";
    t3.disp();
    
    return 0;
}
