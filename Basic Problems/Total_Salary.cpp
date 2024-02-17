/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -

totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary to the nearest integer and then print the integral part only.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int basicSalary;
    char grade;

    cin >> basicSalary >> grade;

    // Calculate components
    double hra = 0.20 * basicSalary;
    double da = 0.50 * basicSalary;
    double allow = 0.0;

    if (grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else
        allow = 1300;

    double pf = 0.11 * basicSalary;

    // Calculate total salary
    double totalSalary = basicSalary + hra + da + allow - pf;

    // Round off to the nearest integer
    int roundedTotalSalary = round(totalSalary);

    // Output the integral part only
    cout << roundedTotalSalary << endl;
    return 0;
}