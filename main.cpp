#include <iostream>

using namespace std;

int main()
{
    int day,month,year;
    cout << "Enter Day   : ";
    cin >> day;
    cout << "Enter Month : ";
    cin >> month;
    cout << "Enter Year  : ";
    cin >> year;

    //option01
    cout << "\n";
    cout <<day << "." << month << "." << year << endl;
    int lasttwodigits = year%100;
    cout <<day << "." << month << "." << lasttwodigits << endl;
    string suffix;
    switch (day%10)
    {
    case 1:
        suffix = (day==11) ? "th " : "st " ;
        break;
    case 2:
        suffix = (day==12) ? "th ": "nd " ;
        break;
    case 3 :
        suffix = (day==13) ? "th " : "rd " ;
        break;
    default:
        suffix = "th" ;
    }
    //output the day with its suffix
    cout << day << suffix;

    switch (month)
    {
    case 1:
        cout << "January ";
        break;
    case 2:
        cout << "February ";
        break;
    case 3:
        cout << "March ";
        break;
    case 4:
        cout << "April ";
        break;
    case 5:
        cout << "May ";
        break;
    case 6:
        cout << "June ";
        break;
    case 7:
        cout << "July ";
        break;
    case 8:
        cout << "August ";
        break;
    case 9:
        cout << "September ";
        break;
    case 10:
        cout << "October ";
        break;
    case 11:
        cout << "November ";
        break;
    case 12:
        cout << "December ";
        break;
    default:
        cout << "Invalid Month Number!";
    }
    cout << year;
    return 0;
}
