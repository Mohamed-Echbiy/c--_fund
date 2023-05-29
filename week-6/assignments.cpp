#include <iostream>
using namespace std;

void ch_1()
{

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Shop Is Closed";
        break;
    default:
        cout << "Day Is Not Valid";
    }
};

void ch_2()
{

    cout << "please write a year to see attached event \n";
    int year;
    cin >> year;

    switch (year)
    {
    case 1982:
        cout << "1982 =>  My Birth Day";
        break;
    case 1989:
        cout << "My First Work";
        break;
    case 1995:
        cout << "Windows 95";
        break;
    case 2000:
        cout << "Windows Millennium";
        break;
    case 2002:
        cout << "Created My vBulletin Forum";
        break;
    default:
        cout << "No Events in This Year";
        break;
    }

    /*
      1982 => "My Birth Day"
      1989 => "My First Work"
      1995 => "Windows 95"
      2000 => "Windows Millennium"
      2002 => "Created My vBulletin Forum"
      Any Other Year => "No Events in This Year"
    */
};

int main()
{
    cout << "--------------------\n";
    ch_1();
    cout << "--------------------\n";
    ch_2();
    cout << "--------------------\n";
}