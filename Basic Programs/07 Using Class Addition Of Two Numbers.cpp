#include <iostream>
#include <conio.h>
using namespace std;

//Compiler version g++ 6.3.0

class Sum
{
    public:
          int iNo1, iNo2, iRes;  // Data Members.
          
          void Add()  // Behaviour / Member Function.
          {
              iRes = iNo1 + iNo2;
          }
};

int main()
{
    Sum Obj;
    
    Obj.iNo1 = 45;
    Obj.iNo2 = 15;
    
    Obj.Add();
    
    cout << endl << "\t Addition Of " << Obj.iNo1 << " + " << Obj.iNo2 << " Is => " << Obj.iRes << endl;
    
    getch();
    return 0;
}
