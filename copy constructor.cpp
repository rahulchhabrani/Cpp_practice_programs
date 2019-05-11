//
//  Copy Constructor - Copy Constructor is used by a object to declare and initialize other objects.

#include <iostream>
using namespace std;

class test
{
    int code;
    float price;
    
    public:
    test(int c,float p);            //parameter constructor
    test(const test &t);            //copy constructor, SYNTAX = class_name(const class_name &object)
    // In the above copy constructor object is passed by reference
    void disp();
};

test::test(int c,float p)
{
    code=c;
    price=p;
}

test::test(const test &t)
{
    code= t.code;
    price= t.price;
}

void test::disp()
{
    cout<<"code : "<<code<<"\t";
    cout<<"price : "<<price<<"\n";
}

int main()
{
    test t1(101,50.6);
    
    // We can call copy constructors in two ways =
    test t2(t1);
    test t3=t1;
    
    cout<<"t1 object = ";
    t1.disp();
    cout<<"t2 object = ";
    t2.disp();
    cout<<"t3 object = ";
    t3.disp();
    
    return 0;
}

/* Example of default copy constructor -
 
#include <iostream>
using namespace std;

class test
{
    int code;
    float price;
    
public:
    test(int c,float p);
    void disp();
};

test::test(int c,float p)
{
    code=c;
    price=p;
}

void test::disp()
{
    cout<<"code : "<<code<<"\t";
    cout<<"price : "<<price<<"\n";
}

int main()
{
    test t1(101,50.6);
 
    test t2(t1);                        // Here t2 and t1 are being initialized by default copy constuctor.
    test t3=t1;
    
    cout<<"t1 object = ";
    t1.disp();
    cout<<"t2 object = ";
    t2.disp();
    cout<<"t3 object = ";
    t3.disp();
    
    return 0;
}

*/
