/*
 * Project Euler
 * Tyler Smith
 * tsmith328@gatech.edu
 */

#include<iostream>

using std::cout;
using std::endl;

bool divisible(long int);

int main()
{
    long int num = 20;
    while (true)
    {
        if (divisible(num))
        {
            cout << num << " is divisible by all numbers 1-20." << endl;
            return 0;
        }
        num += 20;
    }
}

bool divisible(long int num)
{
    for (int i = 1; i <= 20; i++)
    {
        if (num % i != 0)
        {
            return false;
        }
    }
    return true;
}