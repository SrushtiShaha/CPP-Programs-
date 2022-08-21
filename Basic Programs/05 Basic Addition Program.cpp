#include <iostream>
#include <conio.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    cout << endl << "\t Enter Any Two Numbers => ";
    cin >> iNo1 >> iNo2;
    
    iNo1 = iNo1 + iNo2;
    
    cout << endl << " \t Addition Of Given Numbers Is => " << iNo1 << endl;
    
    getch();
    return 0; 
}