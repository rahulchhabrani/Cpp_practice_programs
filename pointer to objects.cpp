//
// 

#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll;
    char name[10];
    
public:
    void getdata(int x,char *y)            // We can also char as char y[]
    {
        roll=x;
        strcpy(name,y);
    }
    
    void putdata()
    {
        cout<<"Student name = "<<name<<"\n";
        cout<<"Student roll no = "<<roll<<"\n";
    }
};

int main()
{
    student obj;
    student *p;
    
    p=&obj;
    
    p->getdata(101,"Rahul");            //We can also write (*p).getdata(101,"Rahul");
    (*p).putdata();
    
    return 0;
}
