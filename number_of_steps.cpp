#include <iostream>

using namespace std;

int number_of_steps(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if(n == 3)
    {
        return 4;
    }
    return number_of_steps(n - 1) + number_of_steps(n - 2) + number_of_steps(n - 3);
}

int cached_number_of_steps(int n, int *dp)
{
    if (dp[n] == -1)
    {
        dp[n] = cached_number_of_steps(n - 1, dp) + cached_number_of_steps(n - 2, dp) + cached_number_of_steps(n - 3, dp);
    }
    
    return dp[n];
}

int main()
{
    int *dp;
    
    int n = 6;
    
    dp = new int [n + 1];
    
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for (int i = 4; i <= n; i++)
    {
        dp[i] = -1;
    }
    
    cout << cached_number_of_steps(n, dp) << endl;
    
    cout << "--------------------" << endl;
    
    int m = number_of_steps(4);
    
    cout << m << endl;

    cout << dp[5] << endl;
    
    return 0;
}