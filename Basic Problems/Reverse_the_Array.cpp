/* Reverse the Array

Problem statement
Given an array with N elements, the task is to reverse all the array elements and print the reversed array.

Sample Input:
8
7 5 2 11 2 43 1 10
Sample Output:
10 1 43 2 11 2 5 7
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Using a loop to reverse the array
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}