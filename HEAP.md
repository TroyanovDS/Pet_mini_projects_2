// 
//сделать класс кучи (HEAP) и методы, в том числе метод добавления элемента в соответствии со свойствами кучи.

#include <iostream>
using namespace std;

class HEAP
{
    int n;
    int* tree;
public:
    HEAP(int _n, int* b);
    void OutHeap();
    void push_number(int num);
    int pop_back();
    ~HEAP();
};

HEAP::HEAP(int _n, int* b)
{
    n = _n;
    tree = new int[10*n];

    for (int i = 0; i < n; i++)
    {
        tree[i] = b[i];
    }
}

void HEAP::OutHeap()
{
    for (int i = 0; i < n; i++)
    {
        cout << tree[i] << " ";
    }
}

HEAP::~HEAP()
{
    delete[] tree;
}

void HEAP::push_number(int num)
{   
    n++;
    int i = n - 1;
    tree[i] = num;
    int ind = (i - 1) / 2;
    while (ind >= 0 && i > 0)
    {
        if (tree[i] < tree[ind])
        {
            int temp = tree[i];
            tree[i] = tree[ind];
            tree[ind] = temp;
        }
        i = ind;
        ind = (i - 1) / 2;
    }
}

int HEAP::pop_back()
{
    int k = tree[n - 1];
    tree[n - 1] = 0;
    n--;
    return k;
}

int main()
{
    int* b;
    int n;

    cout << "n= ";
    cin >> n;

    b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    HEAP a(n, b);

    a.push_number(4);
    a.OutHeap();

    cout << "\n" << "--------------------" << "\n";

    int k = a.pop_back();
    cout << k << endl;

    a.OutHeap();

    delete[] b;
    return 0;
}



