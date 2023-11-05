/*
    Имеется набор данных, состоящий из пар положительных целых чисел. 
    Необходимо выбрать из каждой пары ровно одно число так, 
    чтобы сумма всех выбранных чисел не делилась на 3 и при этом была максимально возможной. 
    Гарантируется, что искомую сумму получить можно. 
    Программа должна напечатать одно число — максимально возможную сумму, соответствующую условиям задачи
*/

#include <iostream>

using namespace std;

int sum_max(int **couple, int n)
{
    int sum = 0;
    int min = abs(couple[0][0] - couple[0][1]);
    
    for (int i = 0; i < n; i++)
    {
        if (couple[i][0] > couple[i][1]) sum += couple[i][0];
        
        else sum += couple[i][1];
        
        int min_2 = abs(couple[i][0] - couple[i][1]);

        if (min_2) % 3 != 0)
        {
            if (min > min_2) min = min_2;
            
        }
    }
    
   
    
    if(sum % 3 == 0) sum -= min;
    
    return sum;
}



int main()
{
   int **couple, n;
   
   
   cout << "n= ";
   cin >> n;
   
   couple = new int* [n];
    
    for (int i = 0; i < n; i++)
    {
        couple[i] = new int [2];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> couple[i][j];
        }
       
    }
    
    
    int ans = sum_max(couple, n);
    
    cout << "answer is " << ans << "\n";
    
    return 0;

}