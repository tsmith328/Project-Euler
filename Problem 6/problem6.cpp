/*
 * Project Euler
 * Tyler Smith
 * tsmith328@gatech.edu
 */

 #include<iostream>
 #include<vector>

 using std::cout;
 using std::endl;

 int main()
 {
     std::vector<int> nums;
     std::vector<int> squares;
     for (int i = 1; i <= 100; i++)
     {
         nums.push_back(i);
         squares.push_back(i*i);
     }
     int sum_sq = 0;
     int sq_sum = 0;

     for (int i = 0; i < 100; i++)
     {
         sum_sq += squares.at(i);
         sq_sum += nums.at(i);
     }
     sq_sum *= sq_sum;

     cout << "The difference between the sum of squares and square of sum is " << sq_sum - sum_sq << endl;
 }