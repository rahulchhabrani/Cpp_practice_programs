//
//  Program to calculate bonus of employees using If Statement.

#include <iostream>
using namespace std;

int main()
{
    int sal, b;
    cout<<"Enter your salary : ";
    cin>>sal;
    
    if(sal>=10000)
    {
        b=(sal*10)/100;
        cout<<"Bonus = "<<b<<"\n";
        sal=sal+b;
    }
    
    cout<<"Salary is = "<<sal<<"\n";
}

