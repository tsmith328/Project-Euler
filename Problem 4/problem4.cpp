/*
 * Project Euler Problem 4
 * Tyler Smith
 * tsmith328@gatech.edu
 */

#include<iostream>
#include<string>
#include<sstream>

using std::cout;
using std::endl;

bool isPalindrome(std::string s);

namespace patch
{
    template <typename T> std::string to_string(const T& n)
    {
        std::ostringstream stm;
        stm << n;
        return stm.str();
    }
}

int main()
{
    int biggest = 0;
    for (int i = 999; i >= 100; i--)
    {
        for (int j = 999; j >= 100; j--)
        {
            int num = i * j;
            std::string numStr = patch::to_string(num);
            if (isPalindrome(numStr))
            {
                if (num > biggest)
                {
                    biggest = num;
                }
            }
        }
    }
    cout << biggest << " is the largest palindroming product of two three-digit numbers." << endl;
}

bool isPalindrome(std::string s)
{
    int i = 0;
    int j = s.length()-1;
    while (i < j)
    {
        if (s.at(i) != s.at(j))
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}