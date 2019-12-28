import java.util.Scanner;

abstract class Skeleton {
    private static final Scanner in = new Scanner(System.in);


    abstract int collatz(int n);

    public static void main(String[] args) {
        Solution __solution = new Solution();

        // checkpoint
        System.out.printf("%d\n", 0);
        // read n
        int n;
        System.out.flush();
        n = in.nextInt();
        // call iterazioni = collatz(n)
        int iterazioni;
        iterazioni = __solution.collatz(n);
        // write iterazioni
        System.out.printf("%d\n", iterazioni);
        // exit
        System.exit(0);
    }
}
