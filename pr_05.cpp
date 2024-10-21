// finding duplicate element in an array//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Wnter the number of array elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before finding the duplicate elements : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate element is : " << arr[i] << endl;
            }
        }
    }
    cout << endl;
    return 0;
}