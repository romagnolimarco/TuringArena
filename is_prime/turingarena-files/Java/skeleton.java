import java.util.Scanner;

abstract class Skeleton {
    private static final Scanner in = new Scanner(System.in);


    abstract int is_prime(int n);

    public static void main(String[] args) {
        Solution __solution = new Solution();

        // checkpoint
        System.out.printf("%d\n", 0);
        // read n
        int n;
        System.out.flush();
        n = in.nextInt();
        // call prime = is_prime(n)
        int prime;
        prime = __solution.is_prime(n);
        // write prime
        System.out.printf("%d\n", prime);
        // exit
        System.exit(0);
    }
}
