//
//  Swap a and b using Call by Address.

#include<iostream>
using namespace std;

void swap(int *,int *);

int main()
{
    int a,b;
    
    cout<<"Enter value of A and B : ";
    cin>>a>>b;
    
    cout<<"Value before swaping \n";
    
    cout<<"A = "<<a<<"\n";
    cout<<"B = "<<b<<"\n";
    
    swap(&a,&b);
    
     cout<<"Value after swaping \n";
    
    cout<<"A = "<<a<<"\n";
    cout<<"B = "<<b<<"\n";
    
    return 0;
}
    
   void swap(int *x,int *y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
