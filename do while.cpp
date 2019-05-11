//
//  Print all even no. from 1 to 100 using Do While Statement.

#include <iostream>
using namespace std;

int main()
{
    /*
    int i=1;
    
     do {
        if(i%2==0)
        {
            cout<<i<<"\n";
        }
        i++;
    } while(i<=100);
     */
    
    int i=2;
    
        do {
            cout<<i<<"\n";
            i+=2;           //i=i+2
        } while(i<=100);
    
    return 0;
}
