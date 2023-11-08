/*1) Только нечетное количество чисел. Найти медиану.
2) Количество чисел может быть как четное, так и нечетное и найти медиану.
3) Найти медиану без сортировки
*/
#include <iostream>
#include <vector>
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


    int med;
    
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        int l = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                if (arr[i] > arr[j])
                {
                    k++;
                } 
                else l++;
            }
        }
        if (k == l)
        {
            med = arr[i];
        }
    }
    
    cout << "mediana= " << med << "\n";


    return 0;

}