/* First index of Element
Take an array with n elements with possibly duplicate elements as the input. The task is to find the index of the first occurrences of the element x in the array and, if it is not present, return -1.

Sample Input 1 :
8
7 5 2 11 2 43 1 1
2
Sample Output 1 :
2
Explanation of Sample Input 1:
2 is present twice in the input array and the first time it appears is at index 2.
Sample Input 2 :
8
7 5 2 11 2 43 1 1
10
Sample Output 2 :
-1
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

    int key;
    cin >> key;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i;
            break;
        }
    }
    if (i == n)
    {
        cout << -1;
    }
    return 0;
}