#include <iostream>
using namespace std;
int main()
{
    int year;

    cout << "enter a year: \n";
    cin >> year;

    if (year % 4 == 0) 
    cout << year << " is a leap year.\n";    
               
    else
    cout << year << " is not a leap year.\n";       

    return 0;
}
