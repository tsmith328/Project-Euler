/**
 * Project Euler
 * @author Tyler Smith
 * @email tsmith328@gatech.edu
 */

 class problem4 {
     public static void main(String[] args) {
         int biggest = 0;
         for (int i = 999; i >= 100; i--) {
             for (int j = 999; j >= 100; j--) {
                 int num = i * j;
                 String numStr = Integer.toString(num);
                 if (isPalindrome(numStr)) {
                     if (num > biggest) {
                         biggest = num;
                     }
                 }
             }
         }
         System.out.println(biggest + " is the largest palindromic product of two three-digit numbers.");
     }

     private static boolean isPalindrome(String str) {
         int i = 0;
         int j = str.length() - 1;
         while (i < j) {
             if (str.charAt(i) != str.charAt(j)) {
                 return false;
             }
             i++;
             j--;
         }
         return true;
     }
 }