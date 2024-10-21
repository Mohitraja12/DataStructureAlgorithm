#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of array elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before reversal :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Array after reversal : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}