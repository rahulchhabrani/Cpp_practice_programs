//
//  Friend Function
/* Rules for friend function -
    1. Since friend function is not a member of any function therefore when we declare it outside the class, we dont use scope resolution or class name for it. Their is no restriction of scope on this fucntion.
    2. Since it has no restriction of scope therefore we call it as normal function without any object . ex-disp()
 3. We can not direct access data in friend fucntion so we access through its objects;
 */


#include<iostream>
using namespace std;

class A;                //class declaration (forward declaration) is done for class A since in class B we have to pass class A as an argument in friend function.

class B                 //class defination
{
    int b;
    
    public:
    void getval(int x)
    {
        b=x;
    }
    
    void putval(void)
    {
        cout<<"Value of b = "<<b<<"\n";
    }
    
    friend void add(A,B);                   // Declaring Friend function in private or public area will does not change its meaning.
};

class A
{
    int a;
    
public:
    void getval(int x)
    {
        a=x;
    }
    
    void putval(void)
    {
        cout<<"Value of a = "<<a<<"\n";
    }
    
    friend void add(A,B);
};

void add(A ob1, B ob2)
{
    cout<<"Addition of a and b = "<<ob1.a+ob2.b<<"\n"; // Friend function can access private data but only through its objects.
}

int main()
{
    A a;
    B b;
    
    a.getval(100);
    b.getval(200);
    
    a.putval();
    b.putval();
    
    add(a,b);               //Friend function is a non member function so it is called like normal function without any object.
    
    return 0;
}
