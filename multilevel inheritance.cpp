//
//  Multilevel Inheritance

#include <iostream>
using namespace std;

class stu
{
    protected:
    int roll;
    
    public:
    void get_roll(int);         //To take roll no. from user.
    void put_roll();            //To display roll no.
};

void stu:: get_roll(int x)
{
    roll=x;
}

void stu:: put_roll()
{
    cout<<"Roll number = "<<roll<<"\n";
}

class test: public stu
{
    protected:
    float m1,m2;
    
    public:
    void get_marks(float,float);            //To take marks of two subjects from user.
    void put_marks();                       //To display marks.
};

void test::get_marks(float x, float y)
{
    m1=x;
    m2=y;
}

void test::put_marks()
{
    cout<<"Marks in sub1 = "<<m1<<"\n";
    cout<<"Marks in sub2 = "<<m2<<"\n";
}

class result: public test                   //Multilevel Inheritance
{
    int total;
    
    public:
    void display();
};
  
void result::display()
{
    total=m1+m2;                //We can use m1,m2 because they are declared in protected.
    put_roll();
    put_marks();
    
    cout<<"Total = "<<total<<"\n";
}

int main()
{
    result obj;
    
    obj.get_roll(101);
    obj.get_marks(53.3,70.1);
    obj.display();
    
    return 0;
}
