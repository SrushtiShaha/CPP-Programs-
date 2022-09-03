#include <iostream>
#include <conio.h>
using namespace std;

//Compiler version g++ 6.3.0

class Sum
{
    public:
          void Add()
          {
              int iN1 = 0, iN2 = 0, iRes = 0;
              
              cout << endl << "Enter Two Numbers => ";
              cin >> iN1 >> iN2;
              
              iRes = iN1 + iN2;
              
              cout << endl << "Addition Of " << iN1 << " And " << iN2 << " Is => " << iRes << "." << endl;
              
              return;
          }
};

int main()
{
    Sum Obj;
    
    Obj.Add();
    
    cout << endl << "Back To Main() Function." << endl;
    
    getch();
    return 0;
}