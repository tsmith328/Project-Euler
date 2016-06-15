/**
 * Project Euler Problem 6
 * @author Tyler Smith
 * @email tsmith328@gatech.edu
 */

 class problem6 {
     public static void main(String[] args) {
         int[] nums = new int[100];
         int[] squares = new int[100];
         for (int i = 1; i <= 100; i++) {
             nums[i-1] = i;
             squares[i-1] = i*i;
         }
         long sum_sq = 0;
         long sq_sum = 0;
         for (int i = 0; i < nums.length; i++) {
             sum_sq += squares[i];
             sq_sum += nums[i];
         }
         sq_sum *= sq_sum;
         System.out.println("The difference between the sum of squares and the square of the sum is " + (sq_sum - sum_sq));
     }
 }