#include <iostream>

using namespace std;

void salary(float Z, float S, float p, float q, int n)
{
    cout << Z - S << endl;
    if(n == 0)
    {
        return;
    }
    salary(Z*(1 + p/100), S*(1 + q/100), p , q , n - 1);
}

void salary_2(float Z, float S, float p, float q, int n)
{
    cout << Z - S << endl;
    if(n == 0)
    {
        return;
    }
    salary_2(Z*(1 + p/100), S*(1 + q/100), p , q/2 , n - 1);
}

int main()
{
    salary(5, 1, 12, 20, 11);
    
    cout << "------------------" << endl;
    
    salary_2(5, 1, 12, 20, 11);
    return 0;
}