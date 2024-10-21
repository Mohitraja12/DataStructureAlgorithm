#include <iostream>
#include <math.h>
#include <string>
#include <unordered_map>
using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};

//     cout << "The list of arrays are : " << endl;
//     for(int i = 0; i < 6 ; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }

//========================================================================================//

// int main()
// {
//     int n;
//     int arr[n];

//     cout << "Enter the number of arry elements : " ;
//     cin >> n;
//     cout << "Enter the arry elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The list of arry elements are : ";
//     for(int i = 0; i < n ; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//========================================================================================//

// int main()
// {
//     int n;
//     int arr[n];
//     cout << "Enter the number of arry elements : ";
//     cin >> n;

//     cout << "Emter the arry elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The list of arry in reverse order : ";
//     for (int i = n - 1 ; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//========================================================================================//

// int main() {
//     int n ;
//     float arr[n];
//     cout << "Enter the number of arry elements : ";
//     cin >> n;
//     cout << "Enter the arry elements : ";
//     for(int i = 0 ; i < n ; i++) {
//         cin >> arr[i];
//     }
//     cout << "The list of floating arry elements are : ";
//     for(int i = 0 ; i < n ; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// ========================================================================================//

// int main () {
//     int n = 0;
//     double arr[n];

//     cout << "Enter the number of arry elements : ";
//     cin >> n;

//     cout << "Enter the arry elements : ";
//     for (int i = 0 ; i < n ; i++ ){
//         cin >> arr[i];
//     }

//     cout << "The list of arry elements are : ";
//     for (int i = 0 ; i < n ; i++){
//         cout << arr[i] << "  ";
//     }
//     cout << endl;
//     return 0;
// }

// ========================================================================================//

// int main()
// {
//     int c;
//     char arr[c];

//     cout << "Enter the nimber of charecters want to give : ";
//     cin >> c;

//     cout << "Enter the chaercter : ";
//     for (int i = 0; i < c; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The list of charecter entered are :- ";
//     for (int i = 0; i < c; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// ========================================================================================//

// int main() {
//     int n;
//     int arr[n];
//     cout << "Enter the number of arry elements : ";
//     cin >> n;
//     cout << "Enter the arry elements : ";
//     for(int i = 0; i < n ; i++){
//         cin >> arr[i];

//     }
//     cout << "The list of arry elements are : ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] <<  " " ;
//     }
//     cout << endl << "The total number of arry elements are : >>> : " << n << endl;
//     return 0;
// }

// ========================================================================================//

// int main()
// {
//     int n;
//     int arr[n];
//     cout << "Enter the number of arry elements : ";
//     cin >> n;
//     cout << "enter the arry elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The list of even elements are : >> : ";
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }

// ========================================================================================//

// int main()
// {
//     int n;
//     int arr[n];
//     cout << "Enter the number of arry elements : ";
//     cin >> n;
//     cout << "enter the arry elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The list of odd elements are : >> : ";
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }

// ========================================================================================//

// int main()
// {
//     int n;
//     int arr[n];

//     cout << "Enter the number of elements : ";
//     cin >> n;
//     cout << "Ehter the arry elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }

//     cout << "The sum of arry elements are : " << sum;

//     cout << endl;
//     return 0;
// }

// ========================================================================================//

// int main()
// {
//     int n;
//     cout << "Enter the number of arry elements : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the arry elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The perfect numbers in the arry are : ";
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < arr[i]; j++)
//         {
//             if (arr[i] % j == 0)
//             {
//                 sum = sum + j;
//             }
//         }
//         if (sum == arr[i])
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// ========================================================================================//

// int main()
// {
//     int n;
//     cout << "Enter the number of arry elements : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the arry elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The perfect square elements are : ";
//     for (int i = 0; i < n; i++)
//     {
//         double sqr = sqrt(arr[i]);

//         if (sqr * sqr == arr[i])
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }

// ========================================================================================//
//
// int main()
// {
// int n;
// cout << "Enter the number of arry elemnts : ";
// cin >> n;
//
// int arr[n];
// cout << "ENter the arry elements : ";
// for (int i = 0; i < n; i++)
// {
// cin >> arr[i];
// }
//
// for (int i = 0; i < n - 1; i++)
// {
// for (int j = 0; j < n - 1; j++)
// {
// if (arr[i] > arr[j + 1])
// {
// int tem = arr[j];
// arr[j] = arr[j + 1];
// arr[j + 1] = tem;
// }
// }
// }
//
// cout << "The list of arry after sorting are : ";
// for (int i = 0; i < n; i++)
// {
// cout << arr[i] << " ";
// }
// cout << endl;
// return 0;
// }

// ========================================================================================//

// int main()
// {
// int n;
// int arr[n];
// cout << "Enter the number of arry elements : ";
// cin >> n;
// cout << "enter the arry elements : ";
// for (int i = 0; i < n; i++)
// {
// cin >> arr[i];
// }
// cout << "The sum of even elements in the arry is :  ";
// for (int i = 0; i < n; i++)
// {
// if (arr[i] % 2 == 0)
// {
// int sum = 0;
// sum = sum + arr[i];
// cout << sum;
// }
// }
//
// cout << endl;
// return 0;
// }
//

// ========================================================================================//

// int main () {
//     int n;
//     cout << "ENter the number of array elements : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the array elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int del;
//     cout << "Enter the location to delete the element from the array";
//     cin >> del;

//     for (int i = del; i < n - 1; i++)
//     {

//     }

//     cout << endl;
//     return 0;
// }

// ========================================================================================//

// class Roman
// {
// private:
//     unordered_map<char, int> roman_dict;

// public:
//     Roman()
//     {
//         roman_dict = {
//             {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
//     }

//     int convert(string &roman)
//     {
//         int total = 0;
//         for (size_t i = 0; i < roman.size(); ++i)
//         {
//             if (i + 1 < roman.size() && roman_dict[roman[i]] < roman_dict[roman[i + 1]])
//             {
//                 total -= roman_dict[roman[i]];
//             }
//             else
//             {
//                 total += roman_dict[roman[i]];
//             }
//         }
//         return total;
//     }
// };

// int main()
// {
//     Roman roman;
//     string input = "MCMXCIV";
//     cout << "The integer value of " << input << " is: " << roman.convert(input) << endl;
//     return 0;
// }

// ========================================================================================//

// class Solution {
// public:
//     bool isValid(string s) {
//         int n = s.length();
//         if (n % 2 != 0)
//             return false;

//         char stack[10000];
//         int top = -1;

//         for (int i = 0; i < n; ++i) {
//             char ch = s[i];
//             if (ch == '(' || ch == '{' || ch == '[') {
//                 stack[++top] = ch;
//             } else {
//                 if (top == -1)
//                     return false;
//                 char topChar = stack[top--];
//                 if ((ch == ')' && topChar != '(') ||
//                     (ch == '}' && topChar != '{') ||
//                     (ch == ']' && topChar != '[')) {
//                     return false;
//                 }
//             }
//         }
//         return top == -1;
//     }
// };

// int main() {
//     Solution s1;
//     string s;

//     cout << "Enter a string containing brackets: ";
//     cin >> s;

//     if (s1.isValid(s)) {
//         cout << "The string is valid." << endl;
//     } else {
//         cout << "The string is invalid." << endl;
//     }

//     return 0;
// }

//========================================================================================//

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int rev = 0;
//         int num = x;
//         while(x != 0) {
//             int rem = x % 10;
//             rev = rev * 10 + rem;
//             x /= 10;
//         }
//         return (rev == num);
//     }
// };

// int main() {
//     Solution solution;
//     int num;
//     std::cout << "Enter a number: ";
//     std::cin >> num;
//     if (solution.isPalindrome(num)) {
//         std::cout << num << " is a palindrome." << std::endl;
//     } else {
//         std::cout << num << " is not a palindrome." << std::endl;
//     }
//     return 0;
// }

//========================================================================================//
// program to transpose 2 d array
// int main() {
//     int n,m;
//     cout << "Enter the number of rows and columns : ";
//     cin >> n >> m;
//     int arr[n][m];
//     cout << "Enter the elements of the array : ";
//     for (int i = 0; i < n;i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "Original array : " << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     cout << "Transpose of array : " ;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//===============================================================================================//
// program to swap 1st column from last column
// int main() {
//     int n, m;
//     cout << "Enter the number of rows and columns : ";
//     cin >> n >> m;
//     int arr[n][m];
//     cout << "Enter the elements of the array : ";
//     for (int i = 0; i < n;i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "Original array : " << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++) {
//         int temp = arr[i][0];
//         arr[i][0] = arr[i][m - 1];
//         arr[i][m - 1] = temp;
//     }
//     cout << "Array after swapping 1st column with last column : " << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//===============================================================================================//

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// void Transverse(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }

// int main()
// {
//     int numNodes;
//     cout << "Enter the number of nodes: ";
//     cin >> numNodes;

//     Node *head = nullptr;
//     Node *tail = nullptr;

//     for (int i = 0; i < numNodes; i++)
//     {
//         Node *temp = new Node();
//         cout << "Enter data for node " << i + 1 << ": ";
//         cin >> temp->data;
//         temp->next = nullptr;

//         if (head == nullptr)
//         {
//             head = temp;
//             tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     Transverse(head);

//     return 0;
// }

//===================================================================================//

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// void Transverse(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }

// void printSquares(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << "Square of " << temp->data << " is: " << temp->data * temp->data << endl;
//         temp = temp->next;
//     }
// }

// int main()
// {
//     int numNodes;
//     cout << "Enter the number of nodes: ";
//     cin >> numNodes;

//     Node *head = nullptr;
//     Node *tail = nullptr;

//     for (int i = 0; i < numNodes; i++)
//     {
//         Node *temp = new Node();
//         cout << "Enter data for node " << i + 1 << ": ";
//         cin >> temp->data;
//         temp->next = nullptr;

//         if (head == nullptr)
//         {
//             head = temp;
//             tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     cout << "Linked List:" << endl;
//     Transverse(head);

//     cout << "\nSquares of numbers in the Linked List:" << endl;
//     printSquares(head);

//     return 0;
// }

//===================================================================================//

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// void Transverse(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }

// bool hasIntegerSquareRoot(int n) {
//     int i = 1;
//     while (i * i <= n) {
//         if (i * i == n) {
//             return true;
//         }
//         i++;
//     }
//     return false;
// }

// void printSquareRoots(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         if (hasIntegerSquareRoot(temp->data)) {
//             cout << "Square root of " << temp->data << " is an integer." << endl;
//         } else {
//             cout << "Square root of " << temp->data << " is not an integer." << endl;
//         }
//         temp = temp->next;
//     }
// }

// int main()
// {
//     int numNodes;
//     cout << "Enter the number of nodes: ";
//     cin >> numNodes;

//     Node *head = nullptr;
//     Node *tail = nullptr;

//     for (int i = 0; i < numNodes; i++)
//     {
//         Node *temp = new Node();
//         cout << "Enter data for node " << i + 1 << ": ";
//         cin >> temp->data;
//         temp->next = nullptr;

//         if (head == nullptr)
//         {
//             head = temp;
//             tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     cout << "Linked List:" << endl;
//     Transverse(head);

//     cout << "\nSquare roots of numbers in the Linked List:" << endl;
//     printSquareRoots(head);

//     return 0;
// }

//===================================================================================//

// printing single dimensional array

// int main() {
//     int arr[5] = {1,2,3,4,5};

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;

// }

// int main() {
//     int n;
//     int arr[n];
//     cout << "Enter the size of the array : ";
//     cin >> n;

//     cout << "Enter the elements of the array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The array elements are : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int find;
    cout << "Enter the element to be found ; ";
    cin >> find;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == find)
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}