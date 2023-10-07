#include <iostream>

using namespace std;

void show_dates(int day, int month, int year, int days, int *a)
{
    for (int i = 0; i < days; i++)
    {
        cout << day << "." << month << "." << year << endl;
        day++;
        
        if (a[month - 1] < day)
        {
            day = 1;
            month++;
            
            if (month == 13)
            {
                month = 1;
                year++;
                
                if (year % 4 == 0)
                {
                    a[1] = 29;
                }
                
            }
        
        }
        
    }
}

int main()
{
    int n = 12, *a;
    
    int day, month, year, days;
    
    
    a = new int [n];
    
    cout << "day: ";
    cin >> day;
    
    cout << "month: ";
    cin >> month;
    
    cout << "year: ";
    cin >> year;
    
    cout << "days: ";
    cin >> days;
    
    a[0] = 31; a[1] = 28; a[2] = 31; a[3] = 30; a[4] = 31; a[5] = 30; a[6] = 31; a[7] = 31; a[8] = 30; a[9] = 31; a[10] = 30; a[11] = 31;
    
    if (year % 4 == 0)
    {
        a[1] = 29;
    }
    
    show_dates(day, month, year, days, a);

    return 0;
}