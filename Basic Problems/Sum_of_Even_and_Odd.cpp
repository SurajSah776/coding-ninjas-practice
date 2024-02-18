/* Sum of even & odd
Problem statement
Write a program to input an integer N and print the sum of all its even digits and all its odd digits separately.

Digits mean numbers, not the places! If the given integer is "13245", the even digits are 2 and 4, and the odd digits are 1, 3, and 5.

Input format:
The only line of input contains a single integer N.
Output format:
Print first even sum and then odd sum separated by space.

Sample Input 1:
1234
Sample Output 1:
6 4
Sample Input 2:
552245
Sample Output 2:
8 15
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int evenSum = 0, oddSum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 != 0)
        {
            oddSum += rem;
        }
        else
        {
            evenSum += rem;
        }
        n /= 10;
    }

    cout << evenSum << " " << oddSum;
    return 0;
}