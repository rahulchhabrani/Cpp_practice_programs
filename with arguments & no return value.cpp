//
//  make a function to add numbers

#include<iostream>
using namespace std;

void add(int,int);                  // parameter  name is not compulsory

int main()
{
    int a,b;
    
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    
    add(a,b);
    
    return 0;
}

void add(int x, int y)
{
    int sum;
    sum=x+y;
    cout<<"Sum = "<<sum<<"\n";
}



