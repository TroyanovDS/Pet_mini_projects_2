#include <iostream>

using namespace std;

int *prefix_sum(int *a, int n)
{
    int *b;
    
    b = new int [n];
    
    int k = 0;
    
    for (int i = 0; i < n; i++)
    {
        k += a[i];
        b[i] = k;
    }
    
    return b;
}

int sum_between(int *a, int min, int max)
{
    int f;
    
    if (min == 0)
    {
        f = a[max];
    }
    else
    {
        f = a[max] - a[min - 1];
    }
    
    
    return f;
}

pair <int, int> sum_is_zero (int *a, int n)
{
    pair <int, int> p;
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(sum_between(a, i, j) == 0)
            {
                p.first = i;
                p.second = j;
                return p;
            }
            
            
        }
    }
    
}
int main()
{
    int *a, *b, n;
    
    cout << "n= ";
    cin >> n;
    
    a = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    b = prefix_sum(a, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    
    cout << endl;
    
    int f = sum_between(b, 0, 2);
    
    cout << f << endl;
    
    pair <int, int> p;
    
    p = sum_is_zero(b, n);
    
    cout << p.first << " " << p.second << endl;
    
    return 0;
}