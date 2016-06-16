/**
 * Project Euler
 * @author Tyler Smith
 * @email tsmith328@gatech.edu
 */

 class problem5 {
     public static void main(String[] args) {
         long num = 20;
         while (true) {
             if (divisible(num)) {
                 System.out.println(num + " is divisible by all numbers 1-20.");
                 return;
             }
             num += 20;
         }
     }

     private static boolean divisible(long num) {
         for (int i = 1; i <= 20; i++) {
             if (num % i != 0) {
                 return false;
             }
         }
         return true;
     }
 }