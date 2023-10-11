#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int min_raz(int *a, int n, int students)
{
    int k = 0;
    int i = 0;
    int max = a[0];
    int min = a[0];
    int f = 0, l;
    int j;
    while (i < n)
    {
        j = i + 1;
        
        max = a[i];
        
        while (j < n)
        {
            if (a[j] < min)
            {
                min = a[j];
            }
            j++;
            
            
        }
        
        if (a[i] <= max)
        {
            f++;
        }
        
        if (f >= students)
        {
            k = abs(max - min);
        }
        
        i++;
    }
    
    return k;
}

int main()
{
    int *a, n, students;
    
    cout << "count of students: ";
    cin >> students;
    
    cout << "count of puzzles: ";
    cin >> n;
    
    a = new int [n];
    
    for (int i; i < n; i++)
    {
        cin >> a[i];
    }
    
    int raz;
    
    raz = min_raz(a, n, students);
    
    cout << "the most minimal difference: " << raz << endl;
    

    return 0;
}
