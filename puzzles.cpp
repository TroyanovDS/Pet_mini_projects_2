#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_raz(vector<int> a, int n, int students)
{
    int raz = a[students - 1] - a[0];
    int j;
    int i = 1;
    while(j < n)
    {
        j = students;
        
        if (a[j] - a[i] < raz)
        {
            raz = a[j] - a[i];
            j++;
            i++;
        }
    }
   
    return raz;
}

int main()
{
    vector<int> a;
    int n, students;
    
    cout << "count of students: ";
    cin >> students;
    
    cout << "count of puzzles: ";
    cin >> n;
    
    int b;
    
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    int raz;
    
    raz = min_raz(a, n, students);
    
    cout << "the most minimal difference: " << raz << endl;
    

    return 0;
}
