/*
Организовать хэш таблицу и метод добавления элементов.
Хэш функция такая же как на занятии.
также реализовать функцию поиска элемента, выдающая тру или фолс (есть такое число или нет).
*/

#include <iostream>
#include <vector>

using namespace std;


class HASH
{
    vector <vector<int>> arr;
public:
    HASH();
    void AddInHash(int num);
    bool Search(int num);
    void ShowHash();
};

HASH::HASH()
{
    arr.resize(10);

    for (int i = 0; i < 10; i++)
    {
        arr[i].resize(1);
    }
}
void HASH::AddInHash(int num)
{
    int i = num % 10;
    arr[i][arr[i].size() - 1] = num;
    arr[i].resize(arr[i].size() + 1);
    
}

bool HASH::Search(int num) 
{
    int i = num % 10;
    int j = 0;
    bool flag = false;
    
    while (flag || j < arr[i].size())
    {
        if (arr[i][j] == num) flag = true;
    }
        return flag;
}

void HASH::ShowHash() 
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
    HASH hash();

    hash.AddInHash(27);
    hash.AddInHash(123);
    hash.AddInHash(87);
    hash.AddInHash(111);
    hash.ShowHash();

    bool t = hash.Search(87);
    cout << t << '\n' << "------------------" << '\n';

    bool f = hash.Search(128);
    cout << f << 'n' << "--------------" << '\n';


    return 0;
}

