/* Find Area of Rectanlge
Problem statement
Take the length(L) and breadth(B) of the rectangle as input and find its area.

Note:
Length and breadth must be an integer value and the area will always be in the range of integers.

Sample Input 1:
4 20
Sample Output 1:
80
*/

#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cin >> l >> b;
    int area = l * b;
    cout << area;
    return 0;
}