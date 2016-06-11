import java.util.List;
import java.util.ArrayList;

class problem1 {
    public static void main(String[] args) {
        List<Integer> multiples = new ArrayList<Integer>();
        for (int i = 0; i < 1000; i++) {
            if (isMultiple(3,i) || isMultiple(5,i)) {
                multiples.add(i);
            }
        }
        int multSum = 0;
        for(Integer i : multiples) {
            multSum += i;
        }
        System.out.println("The sum of all multiples of 3 and 5 below 1000 is:");
        System.out.println(multSum);
    }

    private static boolean isMultiple(int mult, int test) {
        return test % mult == 0;
    }
}