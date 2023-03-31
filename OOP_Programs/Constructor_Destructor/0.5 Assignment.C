//////////////////////////////////////////////////////////////
///       This Is For Reservation For Traveling Mode       ///
//////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Reservation 1

struct Reserve
{
        int Id;
        char Name[40];
        long long int M_No;
        int Cnt;
        int Price;
        int Bill;
};

struct Reserve R[Reservation];
static int i = 0;
static int Option = 0;

void AcceptInfo()
{
        int Cnt = 0, Dig = 0;
        long long int Temp = 0;

        /// Accepting Customers Details.

        printf("\n Accepting Details For Reservation Of The Customers : \n ",Reservation);

        printf("\n----------------------------------------------------------------\n");

        for( i = 0; i < Reservation; i++ )
        {
                R[i].Id = i+101;

                printf("\n Enter Details Of %d Id Customer -> \n",i+101);

                fflush(stdin);

                printf("\n Enter Name -> ");
                gets(R[i].Name);                                                ///scanf("%s",R[i].Name);

                fflush(stdin);

                UP2:
                    printf("\n Mobile Number -> ");
                    scanf("%lld",&R[i].M_No);

                    Temp = R[i].M_No;

                    Cnt = 0;

                    while( Temp > 0 )
                    {
                            Dig = Temp % 10;
                            Cnt++;
                            Temp = Temp / 10;
                    }

                    printf("\n Enter Any Key To Go Ahead...\n");

                getch();

                system("cls");

                printf("\n Which Traveling Mode You Will Prefer???\n");

                printf("\n\t\t 1] Aeroplane \n\t\t 2] Helicopter \n\t\t 3] Ship \n\t\t 4] Train \n\t\t 5] Car \n\t\t 6] Bus \n\t\t 7] Bike \n");

                UP3:
                    printf("\n Select Any One Option -> ");
                    scanf("%d",&Option);

                    if( Option <= 0 || Option >= 8 )
                    {
                            printf("\n\n You Have Entered Invalid Choice!!! \n Please Enter Valid Choice!!!");

                            goto UP3;
                    }

                DOWN:

                printf("\n Enter Number Of Members For Reservation -> ");
                scanf("%d",&R[i].Cnt);

                printf("\n\n----------------------------------------------------------------\n\n");

                getch();

                system("cls");
        }

        printf("\n\n\t Thank You For This Information......");

        getch();

        system("cls");

        return;
}

void DisplayInfo()
{
        /// Display Customers Details.

        if(i > 0)
        {
                printf("\n***************************************************************\n");

                printf("\n\n Customers Details Are : \n\n");

                for( i = 0; i < Reservation; i++ )
                {

                        printf("\n***************************************************************\n");

                        printf("\n Customers Id %d Details => ",R[i].Id);

                        printf("\n\n Customer's Name Is => %s",R[i].Name);

                        printf("\n\n Customer's Mobile Number Is => %lld",R[i].M_No);

                        switch( Option )
                        {
                            case 1:
                                printf("\n\n Number Of Persons Reservation For Aeroplane Is => %d",R[i].Cnt);

                                R[i].Price = 3500;

                                printf("\n\n Price Of One Person Reservation Is => %d",R[i].Price);

                                R[i].Bill = ( R[i].Price * R[i].Cnt );

                                printf("\n\n Total Bill Is => %d",R[i].Bill);

                                break;

                            case 2:
                                printf("\n\n Number Of Persons Reservation For Helicopter Is => %d",R[i].Cnt);

                                R[i].Price = 2500;

                                printf("\n\n Price Of One Person Reservation Is => %d",R[i].Price);

                                R[i].Bill = ( R[i].Price * R[i].Cnt );

                                printf("\n\n Total Bill Is => %d",R[i].Bill);

                                break;

                            case 3:
                                printf("\n\n Number Of Persons Reservation For Ship Is => %d",R[i].Cnt);

                                R[i].Price = 1500;

                                printf("\n\n Price Of One Person Reservation Is => %d",R[i].Price);

                                R[i].Bill = ( R[i].Price * R[i].Cnt );

                                printf("\n\n Total Bill Is => %d",R[i].Bill);

                                break;

                            case 4:
                                printf("\n\n Number Of Persons Reservation For Train Is => %d",R[i].Cnt);

                                R[i].Price = 700;

                                printf("\n\n Price Of One Person Reservation Is => %d",R[i].Price);

                                R[i].Bill = ( R[i].Price * R[i].Cnt );

                                printf("\n\n Total Bill Is => %d",R[i].Bill);

                                break;

                            case 5:
                                printf("\n\n Number Of Persons Reservation For Car Is => %d",R[i].Cnt);

                                R[i].Price = 800;

                                printf("\n\n Price Of One Person Reservation Is => %d",R[i].Price);

                                R[i].Bill = ( R[i].Price * R[i].Cnt );

                                printf("\n\n Total Bill Is => %d",R[i].Bill);

                                break;

                            case 6:
                                printf("\n\n Number Of Persons Reservation For Bus Is => %d",R[i].Cnt);

                                R[i].Price = 600;

                                printf("\n\n Price Of One Person Reservation Is => %d",R[i].Price);

                                R[i].Bill = ( R[i].Price * R[i].Cnt );

                                printf("\n\n Total Bill Is => %d",R[i].Bill);

                                break;

                            default:
                                printf("\n\n Number Of Persons Reservation For Bike Is => %d",R[i].Cnt);

                                R[i].Price = 500;

                                printf("\n\n Price Of One Person Reservation Is => %d",R[i].Price);

                                R[i].Bill = ( R[i].Price * R[i].Cnt );

                                printf("\n\n Total Bill Is => %d",R[i].Bill);

                                break;
                        }

                        printf("\n\n\n***************************************************************\n");
                }

        }
        else
        {
                printf("\n***************************************************************\n");

                printf("\n The Information Is Still Not Entered.\n");

                printf("\n Enter Any Key To Go Ahead.");

                printf("\n\n***************************************************************\n");
        }
}

int main()
{
        int Choice = 0;

        for(;;)
        {
                UP1:

                    printf("\n ____________________************************____________________ \n\n");

                    printf("\n This Are The Choice => \n\n\t 1] Accept Information \n\t 2] Display Information \n\t 3] Exit \n\n");

                    printf("\n ____________________************************____________________ \n\n");

                    printf("\n Enter Your Choice -> ");
                    scanf("%d",&Choice);

                    if( Choice <= 0  || Choice >= 4 )
                    {
                                printf("\n You Have Entered Invalid Choice!!! \n Please Enter Valid Choice!!! \n\n Press Any Key To Go Ahead...");

                                getch();

                                system("cls");

                                goto UP1;
                    }

                switch( Choice )
                {
                        case 1:
                                system("cls");

                                AcceptInfo();

                                break;

                        case 2:
                                system("cls");

                                DisplayInfo();

                                getch();

                                system("cls");

                                break;

                        default:
                                goto DOWN;

                                break;
                }
        }

        DOWN:

            printf("\n\n--------------*************Thank You*************--------------\n");

            printf("\n===============================================================\n\n");

        getch();
        return 0;
}
