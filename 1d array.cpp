// One Dimensional Array
//  Add 5 numbers of array

#include<iostream>
using namespace std;

int main()
{
    int no[5],i,sum=0;
    
    cout<<"Enter 5 numbers : ";
    
    for(i=0;i<5;i++)
    {
        cin>>no[i];
    }
    
    cout<<"Entered no are = ";
    
    for(i=0;i<5;i++)
    {
        cout<<no[i]<<" ";
    }
    
    for(i=0;i<5;i++)
    {
        sum=sum+no[i];
    }
    
    cout<<"\nSum = "<<sum<<"\n";
    
    return 0;
}
