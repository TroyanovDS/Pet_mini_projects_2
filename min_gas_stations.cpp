#include <iostream>

using namespace std;

int min_gas_stations(int *a, int n, int fuel)
{
    int i = 0;
    int k = 0;
    int j = 0;
    while(i < n - 1)
    {
        j = i + 1;
        
        while ((j < n) && (a[j] - a[i] <= fuel))
        {
            j++;
        }
        
        k++;
        i = j - 1;
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