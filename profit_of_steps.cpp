#include <iostream>

using namespace std;

int max(int step_1, int step_2)
{
    if(step_1 > step_2)
    {
        return step_1;
    }
    else if(step_2 >= step_1)
    {
        return step_2;
    }
    
}


int *profit_array(int *a, int n)
{
    int *dp;
    
    dp = new int [n + 1];
    
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++)
    {
        dp[i] = a[i] + max(dp[i - 1], dp[i - 2]);
    }
    
    return dp;
}

int *sertificate(int *dp, int n, int &k) 
{
    int *ans;
    k = 0;
    
    ans = new int [k];
    
    ans[0] = 0;
    k++;
    
    for (int i = 0; i < n; i++)
    {
        if (dp[i] == max(dp[i], dp[i + 1]))
        {
            if(max(dp[i], dp[i - 1]) == dp[i])
            {
                
            }
            else
            {
                ans[k] = i;
                k++;
            }
        }
        else if(dp[i + 1] == max(dp[i], dp[i + 1]))
        {
            if(max(dp[i], dp[i - 1]) == dp[i + 1])
            {
                
            }
            else
            {
                ans[k] = i + 1;
                k++;
            }
            
        }
    }
    
    return ans;
}

int main()
{
    int *a, n;
    
    cout << "n= ";
    cin >> n;
    
    a = new int [n + 1];
    
    a[0] = 0;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    int *dp;
    
    dp = profit_array(a, n);
    
    for (int i = 0; i <= n; i++)
    {
        cout << dp[i] << "\n";
    }
    
    cout << "max profit= " << dp[n] << "\n";
    
    int *steps;
    int k;
    
    
    steps = sertificate(dp, n, k);
    
    for (int i = 1; i < k; i++)
    {
        cout << steps[i] << "\n";
    }
    
    
    return 0;
}