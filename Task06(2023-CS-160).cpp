#include <iostream>
#include <windows.h>
using namespace std;
int EHX = 90, EHY = 12;
int EDX = 90, EDY = 15;
int EVX = 50, EVY = 25;
int PX = 30 , PY = 25 ;
char getCharAtxy(short int x, short int y) ;
void erasePlayer() ;
void movePlayerLeft() ;
void printPlayer() ;
void printMaze();
void printEnemyHorizontally();
void printEnemyVertically();
void printEnemyDiagonally();
void moveEnemyHorizontally();
void eraseEnemyHorizontally();
void eraseEnemyVertically();
void eraseEnemyDiagonally();
void moveEnemyDiagonally();
void moveEnemyVertically();
void movePlayerRight() ;
void movePlayerUp() ;
void movePlayerDown() ;
void gotoxy(int x, int y);

main()
{
    system("cls");
    while (true)
    {
        printMaze();    
        printPlayer() ;
        printEnemyHorizontally();
        printEnemyVertically();
        printEnemyDiagonally();
        moveEnemyHorizontally() ;
        moveEnemyVertically();
        moveEnemyDiagonally() ;
        if (GetAsyncKeyState(VK_RIGHT)) 
        {
            movePlayerRight() ;
        }
        
        if (GetAsyncKeyState(VK_LEFT)) 
        {
            movePlayerLeft() ;
        }
        
        if (GetAsyncKeyState(VK_UP)) 
        {
            movePlayerUp() ;
        }
         
        if (GetAsyncKeyState(VK_DOWN)) 
        {
            movePlayerDown() ;
        }
        Sleep(100) ;
    }
    gotoxy(0,70) ;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
    gotoxy(25, 5);
    cout << "###########################################################################################" << endl;
    gotoxy(25, 6);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 7);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 8);   
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 9);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 10);
    cout << "#                                                                                         #" << endl ;               
    gotoxy(25, 11);
    cout << "#                                                                                         #" << endl; 
    gotoxy(25, 12);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 13);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 14);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 15);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 16);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 17);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 18);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 19);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 20);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 21);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 22);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 23);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 24);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 25);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 26);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 27) ;
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 28);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 29);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 30);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 31);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 32);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 33);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 34);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 35);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 36);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 37);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 38);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 39);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 40);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 41);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 42);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 43);
    cout << "#                                                                                         #" << endl;
    gotoxy(25, 44);
    cout << "#                                                                                         #" << endl;
    gotoxy(25,45) ;
    cout << "###########################################################################################" << endl;
}

void printEnemyHorizontally()
{
   gotoxy(EHX, EHY);
    cout << "  ___ " << endl;
    gotoxy(EHX, EHY + 1);
    cout << " (   )" << endl;
    gotoxy(EHX, EHY + 2);
    cout << " %%%%%" << endl;
    gotoxy(EHX, EHY + 3);
    cout << "(_____)" << endl;
    gotoxy(EHX, EHY + 4);
    cout << "  \\/  " << endl;
}

void printEnemyVertically()
{
    gotoxy(EVX, EVY);
    cout << "  ___ " << endl;
    gotoxy(EVX, EVY + 1);
    cout << " (   )" << endl;
    gotoxy(EVX, EVY + 2);
    cout << " %%%%%" << endl;
    gotoxy(EVX, EVY + 3);
    cout << "(_____)" << endl;
    gotoxy(EVX, EVY + 4);
    cout << "  \\/  " << endl;
}

void printEnemyDiagonally()
{
    gotoxy(EDX, EDY);
    cout << "  ___ " << endl;
    gotoxy(EDX, EDY + 1);
    cout << " (   )" << endl;
    gotoxy(EDX, EDY + 2);
    cout << " %%%%" << endl;
    gotoxy(EDX, EDY + 3);
    cout << "(_____)" << endl;
    gotoxy(EDX, EDY + 4);
    cout << "  \\/  " << endl;
}

void eraseEnemyHorizontally()
{
    gotoxy(EHX, EHY);
    cout << "     ";
    gotoxy(EHX, EHY + 1);
    cout << "     ";
    gotoxy(EHX, EHY + 2);
    cout << "     ";
    gotoxy(EHX, EHY + 3);
    cout << "     ";
    gotoxy(EHX, EHY + 4);
    cout << "     ";
}

void eraseEnemyVertically()
{
    gotoxy(EVX, EVY);
    cout << "     ";
    gotoxy(EVX, EVY + 1);
    cout << "     ";
    gotoxy(EVX, EVY + 2);
    cout << "     ";
    gotoxy(EVX, EVY + 3);
    cout << "     ";
    gotoxy(EVX, EVY + 4);
    cout << "     ";
}

void eraseEnemyDiagonally()
{
    gotoxy(EDX, EDY);
    cout << "     ";
    gotoxy(EDX, EDY + 1);
    cout << "     ";
    gotoxy(EDX, EDY + 2);
    cout << "     ";
    gotoxy(EDX, EDY + 3);
    cout << "     ";
    gotoxy(EDX, EDY + 4);
    cout << "     ";
}

void moveEnemyHorizontally()
{
    eraseEnemyHorizontally();
    EHX = EHX - 1;
    if (EHX == 30)
    {
        EHX = 90;
    }
    printEnemyHorizontally();
}
void moveEnemyVertically()
{
    eraseEnemyVertically();
    EVY = EVY + 1;
    if (EVY == 35)
    {
        EVY = 25;
    }
    printEnemyVertically();
}

void moveEnemyDiagonally()
{
    eraseEnemyDiagonally();
    EDX = EDX - 3;
    EDY = EDY + 1;
    if (EDY == 35 || EDX == 60)
    {
        EDX = 90 ;
        EDY = 25;
    }
    printEnemyDiagonally();
}

void printPlayer() 
{
     gotoxy(PX, PY);
   cout << "\\            " << endl ;
   gotoxy(PX, PY + 1);
   cout << " -----------  " << endl ;
   gotoxy(PX, PY + 2);
   cout << " |    |     \\" << endl ;
   gotoxy(PX, PY + 3);
   cout << " |    |     o " << endl ;
   gotoxy(PX, PY + 4);
   cout << " |----------/ "  << endl ;
   gotoxy(PX, PY + 5);
   cout << "/             " << endl ;
}

void erasePlayer()
{
    gotoxy(PX, PY);
    cout << "              ";
    gotoxy(PX, PY+1);
    cout << "              " ;
    gotoxy(PX, PY + 2);
    cout << "              ";
    gotoxy(PX, PY + 3);
    cout << "              ";
    gotoxy(PX, PY + 4);
    cout << "              ";
}

void movePlayerLeft() 
{
    if (getCharAtxy(PX - 4 , PY) == ' ')
    {
    erasePlayer() ;
    PX = PX - 1 ;
    printPlayer() ;
    }
}

void movePlayerRight() 
{
    if (getCharAtxy(PX+55 , PY) == ' ') 
  {
    erasePlayer() ;
    PX = PX + 1 ;
    printPlayer() ;
       }
}

char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

void movePlayerUp() 
{
    if (getCharAtxy(PX, PY - 1) == ' ') 
  {
    erasePlayer() ;
    PY = PY - 1 ;
    printPlayer() ;
       }
}

void movePlayerDown() 
{
    if (getCharAtxy(PX , PY + 7) == ' ') 
  {
    erasePlayer() ;
    PY = PY + 1 ;
    printPlayer() ;
       }
}

