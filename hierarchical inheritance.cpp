//
//  Hierarchical Inheritance - In Hierarchical Inheritance  there is ONE Base class which is used to derive multiple classes.

#include <iostream>
using namespace std;

class A
{
protected:
    int no;
    
public:
    void getno()
    {
        cout<<"Enter number : ";
        cin>>no;
    }
};

class B: public A
{
public:
    void square()
    {
        cout<<"Square of the no = "<<(no*no)<<"\n";
    }
};

class C: public A
{
public:
    void cube()
    {
        cout<<"Cube of the no = "<<(no*no*no)<<"\n";
    }
};

int main()
{
    B bobj;
    C cobj;
    
    bobj.getno();               /*  By using Nesting of member function we can call getno() in code of square() and
                                 cube(), and then we wont have to call bobj.getno() and cobj.getno().   */
    bobj.square();
    
    cobj.getno();
    cobj.cube();
    
    return 0;
}
    


