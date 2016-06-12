/*
 * Project Euler Problem 3
 * Tyler Smith
 * tsmith328@gatech.edu
 */

#include<iostream>
#include<list>
#include<cmath>

using std::cout;
using std::endl;
using std::list;

bool isPrime(long int);
void getFactors(long int, list<long int>*);
void onlyPrimes(const list<long int>*, list<long int>*);

int main()
{
    list<long int> factors;
    list<long int> primes;
    getFactors(600851475143L, &factors);
    onlyPrimes(&factors, &primes);
    list<long int>::const_iterator it;
    long int biggest = 0;
    for (it = primes.begin(); it != primes.end(); ++it)
    {
        if (*it > biggest)
        {
            biggest = *it;
        }
    }
    cout << "The largest prime factor of that big number is:" << endl;
    cout << biggest << endl;
}

void getFactors(long int num, list<long int>* output)
{
    for (long int i = 1; i <= sqrt((double) num); i++)
    {
        double k = ((double) num) / i;
        long int kint = (long int) k;
        if (k - kint < 0.0000000000000000001 && k - kint > -0.0000000000000000001)
        {
            output->push_back(i);
            output->push_back(kint);
        }
    }
}

void onlyPrimes(const list<long int>* input, list<long int>* output)
{
    list<long int>::const_iterator it;
    for (it = input->begin(); it!= input->end(); ++it)
    {
        if (isPrime(*it))
        {
            output->push_back(*it);
        }
    }
}

bool isPrime(long int num)
{
    if (num < 2) return false;
    if (num == 2) return true;
    for (long int i = 1; i < (long int) sqrt((double) num) + 2; i++)
    {
        if (i != 1 && num % i == 0)
        {
            return false;
        }
    }
    return true;
}