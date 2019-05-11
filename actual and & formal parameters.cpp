// 
//  make a function to add numbers.

#include<iostream>
using namespace std;

void add(int x,int y);

int main()
{
    int a,b;
    
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    
    add(a,b);                       //a and b are arguments
    
    return 0;
}

void add(int x, int y)              //x and y are parameters
{
    int sum;
    sum=x+y;
    cout<<"Sum = "<<sum<<"\n";
}

