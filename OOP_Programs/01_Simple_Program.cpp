#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

//Compiler version g++ 6.3.0

class Calculator
{
    public: 
          int No1, No2, Ans;
          
          Calculator();
          
          Calculator( int, int );
          
          void Add();
          void Sub();
          
          ~Calculator();
};

Calculator :: Calculator()
{
    cout << endl << "Inside Default Constructor." << endl;
}

Calculator :: Calculator( int N1, int N2 )
{
    cout << endl << "Inside Parameterised Constructor." << endl;
     
    No1 = N1; No2 = N2; Ans = 0;
}

void Calculator :: Add()
{
    Ans = No1 + No2;
    
    cout << endl << "Addition Is -> " << Ans << endl;
}

void Calculator :: Sub()
{
    Ans = No1 - No2;
    
    cout << endl << "Subtraction Is -> " << Ans << endl;
}

Calculator :: ~Calculator()
{
    cout << endl << "Inside Distructor." << endl;
}

int main()
{
    Calculator Obj1;
    
    cout << endl << "Enter Two Numbers -> ";
    cin >> Obj1.No1 >> Obj1.No2;
    
    Obj1.Add();
    Obj1.Sub();
    
    getch();
    
    Calculator Obj2( 100, 50 );
    
    Obj2.Add();
    Obj2.Sub();
    
    getch();
    return 0;
}
