/*
Организовать хэш таблицу и метод добавления элементов.
Хэш функция такая же как на занятии.
также реализовать функцию поиска элемента, выдающая тру или фолс (есть такое число или нет).
*/

#include <iostream>
#include <vector>

using namespace std;


class SET
{
    vector <vector<int>> arr;
public:
    SET();
    void AddInSet(int num);
    bool Search(int num);
    void ShowSet();
};

SET::SET()
{
    arr.resize(10);

    for (int i = 0; i < 10; i++)
    {
        arr[i].resize(1);
    }
}
void SET::AddInSet(int num)
{
    int i = num % 10;
    arr[i][arr[i].size() - 1] = num;
    arr[i].resize(arr[i].size() + 1);
    
}

bool SET::Search(int num) 
{
    int i = num % 10;
    int j = 0;
    bool flag = false;
    
    while (flag == false && j < arr[i].size())
    {
        if (arr[i][j] == num) flag = true;
        j++;
    }
        return flag;
}

void SET::ShowSet() 
{
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < arr[i].size(); j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    SET set;

    set.AddInSet(27);
    set.AddInSet(123);
    set.AddInSet(87);
    set.AddInSet(111);
    set.ShowSet();
    
    cout << "-------------------" << '\n';

    bool t = set.Search(87);
    cout << t << '\n' << "------------------" << '\n';

    bool f = set.Search(128);
    cout << f << '\n' << "--------------" << '\n';


    return 0;
}

