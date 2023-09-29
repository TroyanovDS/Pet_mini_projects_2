#include <iostream>

using namespace std;

int *Sorted_mas(int *a, int *b, int n, int m)
{
    int i = 0, j = 0, k = 0;
    
    int *c;
    
    c = new int [n + m];
   
    
    while ((i < n) && (j < m))
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        
        else if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    
    return c;
}
int main()
{
    int *a, *b, *c, n, m;
    
    cout << "n= ";
    cin >> n;
    
    a = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << "m= ";
    cin >> m;
    
    b = new int [m];
    
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    
    c = Sorted_mas(a, b, n, m);
    
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}