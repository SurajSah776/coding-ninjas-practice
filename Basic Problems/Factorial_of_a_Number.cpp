/* Factorial of a Number
Problem statement
Write a program to find the factorial of a number.

Factorial of n is:

n! = n * (n-1) * (n-2) * (n-3)....* 1

Output the factorial of 'n'. If it does not exist, output 'Error'.

Input format :
The only line of input contains a single integer.
Output format :
The only line of output prints the Factorial of the number or "Error" if it doesn't  exist.

Sample Input 1 :
5
Sample Output 1 :
120
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Error";
    }
    else
    {
        int fact = 1;
        for (int i = n; i > 0; i--)
        {
            fact *= i;
        }

        cout << fact;
    }
    return 0;
}