#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;

//Compiler version g++ 6.3.0

class Emp
{
    public:
          int Id;
          char Nm[20];
          float Sly;
          
          Emp();
          Emp( int, char[], float );
          
          void Accept_Details();
          void Display_Details();
          
          ~Emp();
          
    private:
          float HRA;  
                  
          void Calculate_HRA();
};

Emp :: Emp()
{
    cout << endl << "Inside Default Constructor. \n";
    
    Id = 0; Sly = 0.0;   
}

Emp :: Emp( int id, char nm[20], float sly)
{
    cout << endl << "\n Inside Parameterized Constructor.";
    
    Id = id;
    Sly = sly;
    
    strcpy( Nm, nm );
   
    Calculate_HRA();
} 

void Emp :: Accept_Details()
{
    cout << endl << "Enter Id -> ";
    cin >> Id;
    cout << endl << "Enter Name -> ";
    cin>>Nm;
    cout << endl << "Enter Salary -> ";
    cin >> Sly;
   
    Calculate_HRA(); 
}

void Emp :: Display_Details()
{
    cout << endl << "\n\t Id => " << Id;
    cout << endl << "\n\t Name => " << Nm;
    cout << endl << "\n\t Salary => " << Sly;
    cout << endl << "\n\t Home Rent Allowance => " << HRA;
}

void Emp :: Calculate_HRA()
{
    HRA = ( ((float)Sly) / 5);
}

Emp :: ~Emp()
{
    cout << endl << "\n Inside Distructor. \n";
}

int main()
{
    cout << endl << "Employee Project" << endl;
     
    Emp Obj1;
    
    Obj1.Accept_Details();
    Obj1.Display_Details();
    
    Emp Obj2( 2, "Srushti", 20000 );
    
    Obj2.Display_Details();
    
    getch();
    return 0;
}
