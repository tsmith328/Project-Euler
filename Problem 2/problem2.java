/**
 * Project Euler Problem 2
 * @author Tyler Smith
 * @email tsmith328@gatech.edu
 */

import java.util.List;
import java.util.ArrayList;

class problem2 {
    public static void main(String[] args) {
        List<Integer> fibs = getFibs(4000000);
        fibs = onlyEven(fibs);
        int sum = 0;
        for (int i : fibs) {
            sum += i;
        }
        System.out.println("The sum of all even Fibonacci numbers less than 4 million is:");
        System.out.println(sum);
    }

    static List<Integer> getFibs(int limit) {
        int a = 1;
        int b = 1;
        List<Integer> fibs = new ArrayList<Integer>();
        while (b < limit) {
            fibs.add(b);
            int t = a + b;
            a = b;
            b = t;
        }
        return fibs;
    }

    static List<Integer> onlyEven(List<Integer> list) {
        List<Integer> newList = new ArrayList<Integer>();
        for (int i : list) {
            if (i % 2 == 0) {
                newList.add(i);
            }
        }
        return newList;
    }
}