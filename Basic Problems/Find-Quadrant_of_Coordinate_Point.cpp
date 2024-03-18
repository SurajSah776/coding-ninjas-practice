/*
Write a program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

Print
"1st Quadrant": if  +x,+y
"2nd Quadrant": if -x,+y
"3rd Quadrant": if -x,-y
"4th Quadrant": if +x,-y
"x axis": if x,0
"y axis": if 0,y
"Origin": if 0,0
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "Origin";
    }
    else if (x == 0)
    {
        cout << "y axis";
    }
    else if (y == 0)
    {
        cout << "x axis";
    }
    else if (x < 0 && y < 0)
    {
        cout << "3rd Quadrant";
    }
    else if (x > 0)
    {
        if (y < 0)
        {
            cout << "4th Quadrant";
        }
        else
        {
            cout << "1st Quadrant";
        }
    }
    else if (y > 0)
    {
        if (x < 0)
        {
            cout << "2nd Quadrant";
        }
        else
        {
            cout << "1st Quadrant";
        }
    }

    return 0;
}