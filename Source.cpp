#include<iostream>
#include<conio.h>
#include<windows.h>
#include "Header.h"
using namespace std;
int main() {
    MiniExcel excel(5, 5);
    excel.print();
    int data;

    int key;
    while (true) 
    {
        if (_kbhit())
        {
            key = _getch();
            switch (key)
            {
            case 72: 
                excel.moveUp();
                break;
            case 80: 
                excel.moveDown();
                break;
            case 75: 
                excel.moveLeft();
                break;
            case 77: 
                excel.moveRight();
                break;
            case 'a': 
                excel.InsertRowAbove();
                break;
            case 'b':
                excel.InsertRowBelow();
                break;
            case 'r':
                excel.InsertColumnToRight();
                break;
            case 'l':
                excel.InsertColumnToLeft();
                break;
            case 'd': 
                excel.DeleteRow();
                break;
            case 'c': 
                excel.deleteColumn();
                break;
            case 'x': // Clear the current row
                excel.ClearRow();
                break;
            case 'p':  
                excel.input();
                break;
            case 27: 
                return 0;
            case 'z':
                excel.MultipleClearColumn(4);
                break;
            case 'f':
                excel.insertCellByDownShift();
                break;
            case 's': 
                excel.getRangeInput();
                break;
            case 'v':
                excel.getAverageInput();
                break;
            }

            system("cls");
            excel.print();
        }
    }

    return 0;
}
