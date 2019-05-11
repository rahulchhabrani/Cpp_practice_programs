//
//  Pointers and Arrays

#include <iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};
    int *p;
    int i,sum=0;
    
    p=arr;                              //We can also write this as p=&arr[0];
    
    cout<<"Elements are = \n";
    
    for(i=0;i<5;i++)
    {
        cout<<*p<<"\n";
        sum=sum + *p;
        p++;                            /* When we increment p we increment its address i.e. if it is int then it will
                                         increase by 2.
                                         
                                         If we use *p++ above then the value of variable which is pointed by p will get incremented by 1   i.e. 10 will become 11.
                                         
                                         In short if we use p++ then address is incremented and if we use *p++ then value of variable will be incremented. */
        cout<<"Address of p = "<<p<<"\n";
    }
    
    cout<<"Total = "<<sum<<"\n";
    
    return 0;
}
