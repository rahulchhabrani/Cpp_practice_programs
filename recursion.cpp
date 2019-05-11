//
//  Program to find factorial using Recursion.

#include<iostream>
using namespace std;

int fact(int);

int main()
{
    int no;
    
    cout<<"Enter a number : ";
    cin>>no;
    
    cout<<"Factorial of "<<no<<" is "<<fact(no)<<"\n";
   
    return 0;
}

int fact(int n)
{
    
    if(n==0)
    {
        return 1;
    }
    
    return(n*fact(n-1));
    
}
    
