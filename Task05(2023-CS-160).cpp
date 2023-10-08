#include <iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
string enterData ,n1 ,n2, n3  ;
 float p1 , p2 ,p3 , q1 , q2 , q3 ;
void printHeader() ;
int mainMenu() ;
int EnterData() ;
void viewData() ;
void viewFirstProductData(string n1 ,float p1 ,float q1) ;
void viewSecondProductData(string n2 ,float p2 ,float q2) ;
void viewThirdProductData(string n3 ,float p3 ,float q3) ;
void totalCost(float p1 , float p2 , float p3 , float q1 , float q2 , float q3 ) ;
void gotoxy(int x , int y) ;

main()
{
    system("cls") ;
    printHeader() ; 
    while(true)
   {
      printHeader() ; 
    mainMenu() ;
    system("cls") ;
    }
}

void printHeader() 
{
    gotoxy(25,3) ;
     std ::cout << "************************************************************" << endl;
    gotoxy(25,4) ;
     std ::cout << "*                Cafe Management System                    *" << endl;
    gotoxy(25,5) ;
     std ::cout << "************************************************************" << endl;
     std ::cout << endl << endl << endl ;
}

int mainMenu()
{   
    int enterNumber ;
     std ::cout << "1-   Enter data of food items"  << endl;
     std ::cout << "2-   View data of food items"  << endl;
     std ::cout << "3-   Exit"  << endl;
     std ::cout << endl << endl ;
     std ::cout << "Enter the number: " ;
    cin >> enterNumber ;
    if (enterNumber == 1) 
    {
        EnterData() ;
    }
    if (enterNumber == 2 ) 
    {
        viewData() ; 
    }
    if (enterNumber == 3)
    {
        return 0 ;
    }
}

int EnterData()
{
    n1 = " " , n2 = " " , n3 = " " , p1 = 0.0 , p2 = 0.0 , p3 = 0.0 , q1 = 0.0 , q2 = 0.0 , q3 = 0.0 ;  
    cout << "Do you want to enter data: (yes / no)" ;
    cin >> enterData ;
    if (enterData == "yes")
    {
        cout <<  "Enter the name of first food item: " ;
        cin >> n1 ;
        cout <<  "Enter the name of second food item: " ;
        cin >> n2 ;
        cout <<  "Enter the name of third food item: " ;
        cin >> n3 ;
         cout <<  "Enter the price of first food item: " ;
        cin >> p1 ;
        cout <<  "Enter the price of second food item: " ;
        cin >> p2 ;
        cout <<  "Enter the price of third food item: " ;
        cin >> p3 ;
         cout <<  "Enter the quantity of first food item: " ;
        cin >> q1 ;
        cout <<  "Enter the quantity of second food item: " ;
        cin >> q2 ;
        cout <<  "Enter the quantity of third food item: " ;
        cin >> q3 ;
    }
    else
    {
        return 0 ;
    }
}

void viewFirstProductData(string n1, float p1, float q1)
{
    cout << "Name\t" << "Price\t" << "Quantity\t" << endl;
    cout << n1 << "\t" << p1 << "\t" << q1 << "\t" << endl ;  
}

void viewSecondProductData(string n2, float p2, float q2)
{ 
    cout << n2 << "\t" << p2 << "\t" << q2 << "\t" << endl ;  
}

void viewThirdProductData(string n3, float p3, float q3)
{
    cout << n3 << "\t" << p3 << "\t" << q3 << "\t" << endl << endl << endl ;  
}

void totalCost(float p1 , float p2 , float p3 , float q1 , float q2 , float q3 ) 
{
    float TotalCost ;
    TotalCost = (p1*q1) + (p2*q2) + (p3*q3) ;
    cout << "The total price of these items is: " << TotalCost << endl << endl ; 
}

void gotoxy(int x , int y)
{
    COORD coordinates ;
    coordinates.X = x ;
    coordinates.Y = y ;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates) ;
}

void viewData() 
{
    viewFirstProductData(n1 ,p1 , q1 ) ;
    viewSecondProductData(n2 ,p2 , q2 ) ;
    viewThirdProductData(n3 ,p3 , q3 ) ;
    totalCost(p1 , p2 , p3 , q1 , q2 , q3 ) ;
    cout << "Press any key to continue" ;
    getch() ;
}