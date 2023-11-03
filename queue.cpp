#include <iostream>

using namespace std;

int min_time(int one, int two, int three) 
{
    int min = one;

    int min2;

    if (two > three) 
    {
        min2 = three;
    }
    else 
    {
        min2 = two;
    }

    if (min > min2) 
    {
        min = min2;
    }

    return min;
}

int min_queue(int* dp, int **tim, int n) 
{
    int min;

    for (int i = 3; i < n; i++) 
    {
        dp[i] = min_time(dp[i - 1] + tim[i][0], dp[i - 2] + tim[i - 1][1], dp[i - 3] + tim[i - 2][2]);
    }

    min = dp[n - 1];

    return min;
}

int main()
{
    int **tim;

    int n;

    cout << "n= ";
    cin >> n;

    int m;
    
    
    tim = new int * [n];

    for (int i = 0; i < n; i++) 
    {
        tim[i] = new int [3];
    }
    

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> tim[i][j];
        }
    }

    int *dp;

    dp = new int [n];


    dp[0] = tim[0][0];

    if (tim[0][0] + tim[1][0] < tim[0][1]) 
    {
        dp[1] = tim[0][0] + tim[1][0];
    }
    else 
    {
        dp[1] = tim[0][1];
    }

    int min_dp2 = min_time(tim[0][0] + tim[1][0] + tim[2][0], tim[0][1] + tim[2][0], tim[0][2]);

    dp[2] = min_dp2;

    
    for (int i = 3; i < n; i++) 
    {
        dp[i] = -1;
    }

    int min = min_queue(dp, tim, n);
    
    for (int i = 0; i < n; i++) 
    {
        cout << dp[i] << "\n";
    }

    cout << "min = " << min << "\n";
    
    return 0;

}