#include <iostream>
#include <windows.h>
#include <datetimeapi.h>


using namespace std;

int main() 
{

    cout << "this is a simple clock with a date\n";
    int hour, min, sec;
    int year, month, day;
    cout << "-----------------------------------------------------\n";
    cout << "enter your current time in hours,min,sec in order\n";
    cin >> hour >> min >> sec ;
    cout << "-----------------------------------------------------\n";
    cout << "now enter todays date please (year , month ,day) in order : \n";
    cin >> year >> month >> day;

    while (true)
    {
        system("cls");
        if (sec == 59)
        {
            min++;
            sec = 0;
            
        }
        else if (min == 59)
        {
            hour ++; 
            min = 0; 
            
        }
        else if (hour == 24)
        {
            hour = 0;
            min = 0 ;
            sec = 0;
        }
        cout << "==========CLOCK==========\n";
        cout << hour << ":" << min << ":" << sec << endl;
        cout << "=========================\n";
        cout << "==========DATE===========\n";
        cout << "today is : " << year << "/" << month << "/" << day << endl;
        cout << "=========================\n";
    
        sec++;
        Sleep(900);
    }

    return 0;
}
