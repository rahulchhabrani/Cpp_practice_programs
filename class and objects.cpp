//
//  Defining Class and Creating Objects

#include<iostream>
using namespace std;

class sum
{
private:                    // visibility layer  (Note:- 1.by default all members are private. 2. we cant directly access private data members and member function in main function.)
    int a,b,t;
   
    public:                 //visibility layer (Note- we can only access public data members and member function outside our class. We use public functions in main to access private data.)
    
    void getdata(void);
    void putdata(void);
};

void sum:: getdata(void)
{
    cout<<"Enter the value of A & B: ";
    cin>>a>>b;
}

void sum::putdata(void)     //   :: - this is used for scope resolution operator
{
    t=a+b;
    cout<<"Addition of "<<a<<" and "<<b<<" = "<<t<<"\n";
}

int main()
{
    sum obj;
    
    obj.getdata();
    obj.putdata();
    
    return 0;
}
