/*
 * Project Euler Problem 1
 * Tyler Smith
 * tsmith328@gatech.edu
 */

 #include<iostream>
 #include<list>

 using std::cout;
 using std::endl;
 bool mult(int k, int i);

 int main()
 {
     std::list<int> multiples;
     for (int i = 0; i < 1000; i++) {
         if (mult(3, i) || mult(5, i)) {
             multiples.push_back(i);
         }
     }
     int multSum = 0;
     for (std::list<int>::const_iterator iterator = multiples.begin(); iterator != multiples.end(); ++iterator) {
         multSum += *iterator;
     }
     cout << "The sum of all multiples of 3 or 5 below 1000 is:" << endl;
     cout << multSum << endl;
     return 0;
 }

 bool mult(int k, int i) {
     return i % k == 0;
 }