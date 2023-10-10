#include <stdio.h>
#include <iostream>

using namespace std;

void sums(int n)
{
    int i, j;
    int k = 0;
    
    for (i = 1; i <= n - 2; i++)
    {
        for (j = 1; j <= n - 2; j++)
        {
            if(n - i - j == 0)
            {
                break;
            }
            cout << i << "+" << j << "+" << n - i - j << endl;
            k++;
            
        }
    }
    cout << "k=" << k << endl;
}
int main()
{
    int k, n = 100;
    
    sums(n);
    
    

    return 0;
}
