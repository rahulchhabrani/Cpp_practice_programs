//
//  Hybrid Inheritance - When we want to use multiple type of inheritance we use Hybrid Inheritance.

#include <iostream>
using namespace std;

class student
{
    protected:
    int roll;
    
    public:
    void getroll(int x)
    {
        roll=x;
    }
    
    void putroll()
    {
        cout<<"Roll no = "<<roll<<"\n";
    }
};
    
class test:public student
{
        protected:
        float t1,t2;
        
        public:
        void getmarks(float x, float y)
        {
            t1=x;
            t2=y;
        }
        
        void putmarks()
        {
            cout<<"Marks obtained :\n";
            cout<<"Test 1 = "<<t1<<"\n";
            cout<<"Test 2 = "<<t2<<"\n";
        }
};

class sports
{
    protected:
    float sp;
    
    public:
    void getsp(float x)
    {
        sp=x;
    }
    
    void putsp()
    {
        cout<<"Sport score = "<<sp<<"\n";
    }
};

/* Since we need test marks and sports mark to get result we use multiple inheritance to derive a new class result.
   Also since test is derived from class student then it is multilevel inheritance.  */

class result:public test,public sports      //This is combination of multilevel and multiple inheritance.
{
    protected:
    float total;
    
    public:
    void disp();
};

void result::disp()
{
    total=t1+t2+sp;
    putroll();
    putmarks();
    putsp();
    
    cout<<"Total Score = "<<total<<"\n";
}

int main()
{
    result obj;
    
    obj.getroll(101);
    obj.getmarks(80.5,82.3);
    obj.getsp(9.5);
    
    obj.disp();
    
    return 0;
}
    
    
