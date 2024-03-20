/*
Sum of Even Numbers till N
Problem statement
Given a number N, print sum of all even numbers from 1 to N.

Input Format :
The only line of input contains an integer, N.
Output Format :
The only line of output prints the sum of all even numbers from 1 to N.

Sample Input 1 :
6
Sample Output 1 :
12
Explanation of Sample Input 1:
The even numbers from 1 to 6 are: 2, 4, 6, So adding these 3 numbers give
a sum of 12.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << sum;
    return 0;
}