/* Fahrenheit to Celsius
Problem statement
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E), and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W into their corresponding Celsius values and print the table.

Note:
Print the floor of the Celsius values if they are non-negative else print its ceil value.

Input Format :
The first line of input contains a single integer S, representing the Start
Fahrenheit Value.
The second line of input contains a single integer E, representing the end
Fahrenheit Value.
The third line of input contains a single Integer W, representing the Step Size.
Output Format :
Print the Fahrenheit and corresponding tab-separated ("\t") Celcius value in a
single line.
Output for every Fahrenheit and corresponding Celsius value will be printed in a
separate line.

Sample Input 1:
0
100
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37
Sample Input 2:
20
119
13
Sample Output 2:
20  -6
33  0
46  7
59  15
72  22
85  29
98  36
111 43
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int S, E, W;
    cin >> S >> E >> W;

    for (int i = S; i <= E; i += W)
    {
        double cel = (5 * (i - 32)) / 9;
        if (cel > 0)
        {
            cout << i << "\t" << ceil(cel);
        }
        else
        {
            cout << i << "\t" << floor(cel);
        }
        cout << endl;
    }

    return 0;
}
// C = 5/9(F-32)