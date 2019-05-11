//
//  Inline function:- it is used to save time between jumps from main to function.
// Note:_ it is only used for one or two line function and not for complicated function. At time of compile it send request to computer. if we inline complicated function request may get ignored.

#include<iostream>
using namespace std;

inline int max(int x,int y)
{
    return ((x>y)? x : y);
}
    
    
int main()
{
    int a,b;
    
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    
    cout<<max(a,b)<<" is greater \n";
    
    return 0;
}
