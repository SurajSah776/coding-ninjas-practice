/* Total Prime
Problem statement
Write a program to find the total number of a primes number in a given interval.

Given two integers S and E, count all primes between S and E.

Sample Input 1 :
2 10
Sample Output 1 :
4
Explanation of Sample Input 1:
The prime numbers between 2 and 10
are 2,3,5 and 7
Sample Input 2 :
2 5
Sample Output 2 :
3
*/

#include <iostream>
using namespace std;

int main()
{
    int S, E;
    cin >> S >> E;

    int count, prime = 0;
    for (int i = S; i <= E; i++)
    {
        count = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            prime++;
        }
    }
    cout << prime;
    return 0;
}