//  Scope Resolution Operator
// We use this operator in two ways - Unary and Binary

#include<iostream>
using namespace std;

// This is the 1st type to use scope resolution operator :-
// (A) Global Scope Resolution operator, SYNTAX = ::variable_name .
int sum=100;

int main()
{
    int sum=500;
    
    cout<<"Value of sum = "<<sum<<"\n";
    cout<<"Value of sum = "<<::sum<<"\n";
    
    return 0;
}

// In the 2nd type we use scope resolution operator to declare data members or member function outside our class for example :-
// (B) Class Scope Resolution operator, SYNTAX= class_name::member_name;    (while defining member function we do not use semicolon)

/*
   For member function -
class Test
 {
 public:
 void disp();
 };
 
 void Test::disp()
 {
 
 }
 
 For data member -
 class Test
 {
 static int count;
 };
 
 int Test::count;
 
 */

