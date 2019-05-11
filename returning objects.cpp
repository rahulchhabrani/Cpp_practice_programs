//
//  Returning Objects

#include<iostream>
using namespace std;

class test
{
    int a,b;
    
    public:
    void getval(int x,int y)
    {
        a=x;
        b=y;
    }
    
    friend test sum(test,test);  //It is returning object so here we use class_name as type.
    
    void dispval(test);
};

test sum(test t1,test t2)
{
    test t;
    t.a = t1.a + t2.a;      // Since Friend function is not a direct member function of any class therefore it cannot directly use data so it uses through its objects.
    t.b = t1.b + t2.b;
    
    return t;
}

void test :: dispval(test t)
{
    cout<<"Value of A : "<<t.a<<"\t";
    cout<<"Value of B : "<<t.b<<"\n";
}

int main()
{
    test A,B,C;
    
    A.getval(10,20);
    B.getval(30,40);
    
    C=sum(A,B);
    
    A.dispval(A);
    B.dispval(B);
    C.dispval(C);
    
    return 0;
}
    
    
