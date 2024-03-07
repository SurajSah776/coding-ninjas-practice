
#include <bits/stdc++.h>
using namespace std;
static int fib[100];

int *printFibb(int n)
{
    if (n == 1)
    {
        fib[0] = 1;
        return fib;
    }
    else if (n == 2)
    {
        fib[0] = 1;
        fib[1] = 1;
        return fib;
    }
    else
    {
        long long a = 1, b = 1, c;
        fib[0] = a;
        fib[1] = b;

        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            fib[i] = c;
            a = b;
            b = c;
        }
    }
    return fib;
}

// Driver Code
int main()
{
    int num;
    cin >> num;

    int *arr = printFibb(num);

    for (int i = 0; i < num; i++)
    {
        cout << *(arr + i) << "  ";
    }

    return 0;
}