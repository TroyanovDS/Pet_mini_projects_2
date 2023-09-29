#include <iostream>

using namespace std;

int count_of_operations(int *a, int n)
{
    int k = 0;
    
    
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] % 2 != 0)
        {
            a[i]++;
            a[i + 1]++;
            k++;
        }
        
    }
    
    if (a[n - 1] % 2 != 0)
    {
        return -1;
    }
    
    return k;
}

int main()
{
   int *a, n;
   
   cout << "n= ";
   cin >> n;
   
   a = new int [n];
   
   for (int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   
    cout << "count of operations: " << count_of_operations(a, n) << endl;
    return 0;
}