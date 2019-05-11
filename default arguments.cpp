//
// Default argument - default argument means to give default values at the time of function declaration. You can also call the function without giving those arguments.
//  make add fucntion with default arguments

#include<iostream>
using namespace std;

// Note:- You can only give default arguments from RIGHT to LEFT.
int add(int x=10, int y=20, int z=30)
{
    return(x+y+z);
}

int main()
{
    cout<<add()<<"\n";                //10+20+30=60
    cout<<add(100)<<"\n";             //100+20+30=150
    cout<<add(50,50)<<"\n";           //50+50+30=130
    cout<<add(100,100,100)<<"\n";     //100+100+100=300
    
    return 0;
}
    
