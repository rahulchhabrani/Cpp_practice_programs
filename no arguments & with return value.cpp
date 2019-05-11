//
//  make a function to add numbers

#include<iostream>
using namespace std;

int add(void);

int main()
{
    int sum;
    
    sum=add();
    
    cout<<"Addition = "<<sum<<"\n";
    
    return 0;
}

int add(void)
{
    int x,y;
    
    cout<<"Enter two numbers :";
    cin>>x>>y;
    
    
    return (x+y);
}



