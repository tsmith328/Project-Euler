/*
 * Project Euler
 * Tyler Smith
 * tsmith328@gatech.edu
 */

#include<iostream>
#include<list>

using std::cout;
using std::endl;
using std::list;

void getFibs(int limit, list<int>* output);
void onlyEven(const list<int>* input, list<int>* output);

int main()
{
    list<int> fibs;
    list<int> evenFibs;
    getFibs(4000000, &fibs);
    onlyEven(&fibs, &evenFibs);
    int sum = 0;
    list<int>::const_iterator it;
    for (it = evenFibs.begin(); it != evenFibs.end(); ++it)
    {
        sum += *it;
    }
    cout << "The sum of all even Fibonacci numbers less than 4000000 is:" << endl;
    cout << sum << endl;
}

void getFibs(int limit, list<int>* output)
{
    int a = 1;
    int b = 1;
    while (b < limit)
    {
        output->push_back(b);
        int t = a + b;
        a = b;
        b = t;
    }
}

void onlyEven(const list<int>* input, list<int>* output)
{
    list<int>::const_iterator it;
    for (it = input->begin(); it != input->end(); ++it)
    {
        if (*it % 2 == 0)
        {
            output->push_back(*it);
        }
    }
}