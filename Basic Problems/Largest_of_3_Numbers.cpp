/*
Write a program that takes three numbers a,b, and c as input and prints the largest number amongst them.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
            cout << a;
        else
            cout << c;
    }
    else if (b > a)
    {
        if (b > c)
            cout << b;
        else
            cout << c;
    }
    else
        cout << c;

    return 0;
}