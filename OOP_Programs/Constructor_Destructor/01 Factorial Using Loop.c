#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

long int Factorial( int );

int main()
{
    int iNo = 0;
    
    printf("\n Enter A Number To Find Its Factorial => ");
    scanf("%d",&iNo);
    
    printf("\n The Factorial Of Given Number %d Is = %ld.", iNo, Factorial( iNo ) );
    
    getch();
    return 0;
}

long int Factorial( int iNum )
{
    int iFact = 1;
    
    while( iNum > 1 )
    {
        iFact = iFact * iNum;
        
        iNum--;
    }
    
    return iFact;
}