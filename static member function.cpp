//
//  Static Member Functions - A static member function can  only access static data members and static member functions.
// We can call static data members by its class name also with scope resolution.

#include<iostream>
using namespace std;

class test
{
    int no;
    static int count;                   // static data member
    
public:
    void setno(void);
    void dispno(void);
    static void dispcount(void);
};

void test::setno(void)
{
    no=++count;
}

void test::dispno(void)                 
{
    cout<<"Object number = "<<no<<"\n";
}

void test::dispcount(void)
{
    cout<<"counter = "<<count<<"\n";
}

int test::count;

int main()
{
    test t1,t2;
    
    t1.setno();
    t2.setno();
    
    test::dispcount();      // We can  call static member function by class.
    
    test t3;
    t3.setno();
    
    test::dispcount();      // we can also do this by t2.dispcount();
    
    t1.dispno();
    t2.dispno();
    t3.dispno();
    
    return 0;
}



