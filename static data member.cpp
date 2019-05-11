//
//  Static Data Members

#include<iostream>
using namespace std;

class test
{
    int no;
    static int count;               // static data member is common for all objects. When we create static data members it is intitalized with 0.
    
    public:
    void getval(int);               // To get value of no
    void dispcount(void);           // To print value of counter
};

void test::getval(int x)
{
    no=x;
    cout<<"Number = "<<no<<"\n";
    count++;
}

void test::dispcount(void)
{
    cout<<"counter = "<<count<<"\n";
}

// Since static data member is stored seperately and it is not part of any object thats why it must be define outside the class also.
int test::count;                    // To use static data member it should be declared outside the class also.
//int test::count=10;  We can also give initial value to static data member at the time of defining it.


int main()
{
    test t1,t2,t3;
    
    t1.dispcount();
    t2.dispcount();
    t3.dispcount();
    
    t1.getval(100);
    t2.getval(200);
    t3.getval(300);
    
    t1.dispcount();
    t2.dispcount();
    t3.dispcount();
    
    return 0;
}
    

