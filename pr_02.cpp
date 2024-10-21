//printing the minimum and maximun element from the array//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of array elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements : ";
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "The minimum and the maximum element of the array are : " << min << " and " << max;
return 0;
}