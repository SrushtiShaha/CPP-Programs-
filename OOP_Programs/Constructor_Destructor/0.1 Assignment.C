#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Reservation 2

struct Reser
{
        int Id;
        char Name[40];
        int M_No;
        int Cnt;
        int Price;
        int Bill;
};

int main()
{
        int i = 0;
        struct Reser Reserve[Reservation];

        /// Accepting Customers Details.

        printf("\n Accepting Details For Reservation Of The Customers : \n ",Reservation);

        for( i = 0; i < Reservation; i++ )
        {
                Reserve[i].Id = i+101;

                printf("\n----------------------------------------------------------------\n");

                printf("\n Enter Details Of %d Id Customer -> \n",i+101);

                fflush(stdin);

                printf("\n Enter Name -> ");
                gets(Reserve[i].Name);                                                ///scanf("%s",Reserve[i].Name);

                fflush(stdin);

                printf("\n Mobile Number -> ");
                scanf("%d",&Reserve[i].M_No);

                printf("\n Enter Number Of Members For Reservation -> ");
                scanf("%d",&Reserve[i].Cnt);

                Reserve[i].Price = 500;

                Reserve[i].Bill = ( Reserve[i].Price * Reserve[i].Cnt );
        }

        /// Display5 Customers Details.

        system("cls");

        printf("\n\n================================================================\n");


        printf("\n\n Customers Details Are : \n\n");

        for( i = 0; i < Reservation; i++ )
        {
                printf("\n****************************************************************\n");

                printf("\n Customers Id %d Details => ",Reserve[i].Id);

                printf("\n\n\t Customer's Name Is                 => %s",Reserve[i].Name);

                printf("\n\n\t Customer's Mobile Number Is        => %d",Reserve[i].M_No);

                printf("\n\n\t Number Of Persons Reservation Is   => %d",Reserve[i].Cnt);

                printf("\n\n\t Price Of One Person Reservation Is => %d",Reserve[i].Price);

                printf("\n\n\t Total Bill Of Is                   => %d Rs\n",Reserve[i].Bill);
        }

        printf("\n****************************************************************\n");

        getch();
        return 0;
}
