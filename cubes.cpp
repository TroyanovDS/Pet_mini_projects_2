#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

void gravity(int n, int *a)
{
    int i = 0;
    int j;
    int k;
    
    while (i < n)
    {
        j = i + 1;
        
        while (j < n)
        {
            if (a[i] > a[j])
            {
                k = a[i] - a[j];
                a[j] = a[i];
                a[i] -= k; 
            }
            j++;
        }
        
        
        i++;
    }
    
}

int main()
{
    int *a, n;
    
    a = new int [n];
    
    cout << "n= ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    gravity(n, a);
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
