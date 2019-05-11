//
// Constant argument - If we want to make a program in which value of variable cannot be modified in formal parameters then you can use const keyword at the time of function defination.
//  make a fucntion with constant arguments.

#include<iostream>
using namespace std;

float area_of_circle(const float pi, float r)
{
    float result;

    result=pi*r*r;
    
    //pi=pi+r;              // We cannot modify value of constant argument or variable.
    r=pi+r;
    
    return(result);
}

int main()
{
    float pi=3.14159;
    float r;
    
    cout<<"Enter radius of circle : ";
    cin>>r;
    
   cout<<"Area of circle = "<<area_of_circle(pi,r)<<"\n";
    
    return 0;
}

