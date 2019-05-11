//
//  Make a function to do square

#include<iostream>
using namespace std;

int sqr(int);

int main()
{
    int no,ans;
    
    cout<<"Enter a number : ";
    cin>>no;
    
    ans=sqr(no);
    
    cout<<"Square of "<<no<<" is "<<ans<<"\n";
    
    return 0;
}

int sqr(int x)
{
    return (x*x);
}

