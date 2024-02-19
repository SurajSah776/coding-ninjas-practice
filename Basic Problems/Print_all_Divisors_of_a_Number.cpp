/* Print all Divisors of a number
Problem statement
Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.

For example:
'N' = 5.
The divisors of 5 are 1, 5.

Sample Input 1 :
10
Sample Output 1 :
1 2 5 10
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Divisors of " << n << " are:\n";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "  ";
        }
    }
    return 0;
}

/*

int* printDivisors(int n, int &size) {
    // Write your code here
    vector<int> div;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            div.push_back(i);
        }
    }
    size = div.size();
    int *arr = new int[size];
    for(int i=0; i<size; i++){
        arr[i] = div[i];
    }
    return arr;

}
*/