/**
 * Project Euler
 * @author Tyler Smith
 * @email tsmith328@gatech.edu
 */

class problem7 {
    public static void main(String[] args) {
        int count = 0;
        int i = 1;
        int lastPrime = 0;
        while (count < 10001) {
            if (isPrime(i)) {
                count++;
                lastPrime = i;
            }
            i++;
        }
        System.out.println("The 10,001st prime is " + lastPrime);
    }

    static boolean isPrime(int i) {
        if (i <= 1) { return false; }
        if ( i == 2) { return true; }
        for (int j = 2; j <= (int) Math.sqrt((float) i) + 1; j++) {
            if (i % j == 0) { return false; }
        }
        return true;
    }
}