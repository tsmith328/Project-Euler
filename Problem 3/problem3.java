/**
 * Project Euler Problem 3
 * @author Tyler Smith
 * @email tsmith328@gatech.edu
 */

import java.util.List;
import java.util.ArrayList;

class problem3 {
    public static void main(String[] args) {
        List<Long> factors = getFactors(600851475143L);
        List<Long> primes = onlyPrimes(factors);
        long biggest = 0;
        for (long i : primes) {
            if (i > biggest) {
                biggest = i;
            }
        }
        System.out.println("The largest prime factor of that big number is:");
        System.out.println(biggest);
    }

    private static List<Long> getFactors(long num) {
        List<Long> factors = new ArrayList<Long>();
        for (long i = 1; i <= Math.sqrt(num); i++) {
            double k = ((double) num) / i;
            long kint = (long) k;
            if (k - kint < 0.00001 && k - kint > -0.0001) {
                factors.add(i);
                factors.add(kint);
            }
        }
        return factors;
    }

    private static List<Long> onlyPrimes(List<Long> factors){
        List<Long> primes = new ArrayList<Long>();
        for (long i : factors) {
            if (isPrime(i)) {
                primes.add(i);
            }
        }
        return primes;
    }

    private static boolean isPrime(long num) {
        if (num < 2) return false;
        if (num == 2) return true;
        for (long i = 1; i < (long) Math.sqrt(num) + 2; i++) {
            if (i != 1 && num % i == 0) {
                return false;
            }
        }
        return true;
    }
}