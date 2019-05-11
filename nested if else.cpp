//
// Find age of user using Nested If Else Statement.

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age = ";
    cin>>age;
    
    if(age>=10 && age<=50)
    {
        if(age>=10 && age<=18)
        {
            cout<<"You are a teenager \n";
        }
        else
        {
            cout<<"You are not a teenager \n";
        }
    }
    
    else
    {
        if(age<10)
        {
            cout<<"You are under 10 years \n";
        }
        else
        {
            cout<<"You are more than 50 years \n";
        }
        
    }
        return 0;
    }
