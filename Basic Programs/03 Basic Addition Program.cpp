#include <iostream>
#include <conio.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;
    
    cout << endl << "\t Enter First Number => ";
    cin >> iNo1;
    
    cout << endl << "\t Enter Second Number => ";
    cin >> iNo2;
    
    iAns = iNo1 + iNo2;
    
    cout << endl << "\t Addition Of " << iNo1 << " And " << iNo2 << " Is -> " << iAns << endl;
    
    getch();
    return 0;
}
