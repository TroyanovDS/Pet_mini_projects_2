#include <iostream>

using namespace std;

int min_gas_stations(int *a, int n, int fuel)
{
    int i = 1;
    int k = 0;
    int len = 0;
    while(i < n)
    {
        if(a[i] - a[i - 1] < fuel)
        {
            len += a[i] - a[i - 1];
            i++;
            
            if(len + a[i] - a[i - 1] >= fuel)
            {
                k++;
            }
            else
            {
                i++;
            }
        }
        else if (a[i] - a[i - 1] >= fuel)
        {
            k++;
            i++;
        }
        
    }
    
    return k;
}
int main()
{
    int *a, n, k, fuel;
    
    
    cout << "n= ";
    cin >> n;
    
    a = new int [n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << "fuel= ";
    cin >> fuel;
    
    k = min_gas_stations(a, n, fuel);
    
    cout << k << endl;

    return 0;
}