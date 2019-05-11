//
//  Function overloading:- one name multiple uses.

#include<iostream>
using namespace std;

int calc(int);
int calc(int,int);

int main()
{
    int s,a,b;
    
    cout<<"Enter a number : ";
    cin>>s;
   
    cout<<"Square of "<<s<<" = "<<calc(s)<<"\n";
    
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    
    cout<<"Addition is = "<<calc(a,b)<<"\n";
    
    return 0;
    
}

int calc(int x)
    {
        return x*x;
    }
    
int calc(int x,int y)
    {
        return x+y;
    }
    
    
