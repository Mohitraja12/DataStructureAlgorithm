#include <iostream>
using namespace std;

void cycle(int n, int a[])
{
    int last_ele = a[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = last_ele;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    cycle(n, arr);

    return 0;
}