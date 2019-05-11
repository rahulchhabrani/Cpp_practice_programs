//
//  Operator Overloading - In c++ we can provide additional meaning to operators by operator overloading.
/* Some operators which cannot be used for operator overloading are as follows :
 1) Class member access operator (. or .*)
 2) Scope resolution operator (::)
 3) Sizeof
 4) Conditional (!?)


 SYNTAX=
If we define outside the class - return_type class_name :: operator op(Argument_list)
If we define inside the class - return_type operator op(Argument_list)
In above syntax, operator is a keyword and op is the symbol which is overloaded.
*/

// Unary operator - Those operator which need only one operand is called unary operator. i.e a++ or a-- or -a ,etc.

// Program for Unary Operator Overloading -

#include <iostream>
using namespace std;

class test
{
    int a,b,c;
    
public:
    void getdata(int x,int y,int z);
    void operator -();                      // In unary operator overloading we do not need any arguments.
    void disp();
};

void test::getdata(int x,int y, int z)
{
    a=x;
    b=y;
    c=z;
}

void test::operator - ()
{
    a=-a;
    b=-b;
    c=-c;
}

void test::disp()
{
    cout<<"Value of a = "<<a<<"\n";
    cout<<"Value of b = "<<b<<"\n";
    cout<<"Value of c = "<<c<<"\n";
}

    int main()
    {
        test obj;
        
        obj.getdata(-10,20,30);
        obj.disp();
        
        -obj;                           // We can also write this as obj.operator-();
        
        obj.disp();
        
        return 0;
    }
        
        
    
