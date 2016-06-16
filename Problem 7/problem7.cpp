/*
 * Project Euler
 * Tyler Smith
 * tsmith328@gatech.edu
 */

#include<iostream>
#include<cmath>

using std::cout;
using std::endl;

bool isPrime(int);

int main()
{
    int count = 0;
    int i = 1;
    int lastPrime = 0;
    while (count < 10001)
    {
        if (isPrime(i))
        {
            count++;
            lastPrime = i;
        }
        i++;
    }
    cout << "The 10,001st prime is " << lastPrime << endl;
}

bool isPrime(int i)
{
    if (i <= 1) { return false; }
    if (i == 2) { return true; }
    for (int j = 2; j <= (int) sqrt((double) i ) + 1; j++) 
    {
        if (i % j == 0)
        {
            return false;
        }
    }
    return true;
}