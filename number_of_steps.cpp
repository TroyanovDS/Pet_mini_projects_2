#include <iostream>

using namespace std;

int number_of_steps(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if(n == 3)
    {
        return 4;
    }
    return number_of_steps(n - 1) + number_of_steps(n - 2) + number_of_steps(n - 3);
}

int main()
{
    
    int m = number_of_steps(4);
    
    cout << m << endl;

    
    return 0;
}