/*1) Только нечетное количество чисел. Найти медиану.
2) Количество чисел может быть как четное, так и нечетное и найти медиану.
3) Найти медиану без сортировки
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    int n;

     cout << "n= ";
     cin >> n;

     vector<int> arr(n);
     for (int i = 0 ; i < n; i++)
     {
         cin >> arr[i];
     }

     sort(arr.begin(), arr.end());

     double med;
     if (n % 2 != 0)
     {
         med = arr[(n - 1) / 2];
     }
     else if (n % 2 == 0) 
     {
         med = 0.5 * (arr[(n - 2) / 2] + arr[n / 2]);
     }
     cout << "mediana= " << med << "\n";


    return 0;

}