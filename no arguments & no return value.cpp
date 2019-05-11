//
//  Make a function to do square

#include<iostream>
using namespace std;

void square(void);

int main()
{
    square();
    
    return 0;
}

void square(void)                       
{
    int no;
    
    cout<<"Enter a number : ";
    cin>>no;
    
    cout<<"Square of "<<no<<" is "<<no*no<<"\n";
    
}




