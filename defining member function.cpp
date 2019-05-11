//
//  Defining Member Functions
/*          1.Inside the class defination
            2.Outside the class defination
 */

#include<iostream>
using namespace std;

class Test
{
    int roll;
    float per;
    
public:
    void getdata(int,float);
    void putdata(void)                         // Defining member functions Inside the class defination.
    {
        cout<<"roll = "<<roll<<"\n";
        cout<<"per = "<<per<<"\n";
    }
};

// Defining member functions Outside the class defination.
void Test :: getdata(int x,float y)            //return_type class_name :: function_name(parameter_list)
{
    roll=x;
    per=y;
}

int main()
{
    Test t1;
    
    t1.getdata(10,80.5);
    t1.putdata();
    
    return 0;
}



