//
//  Find greater using Else If Ladder.

#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter value of x : ";
    cin>>x;
    cout<<"Enter value of y : ";
    cin>>y;
    
    if(x>y)
    {
        cout<<"x is greater \n";
    }
    
    else if(x<y)
    {
        cout<<"y is greater \n";
    }
    
    else
    {
        cout<<"both are same \n";
    }
    
    return 0;
}
