import java.util.Scanner;

abstract class Skeleton {
    private static final Scanner in = new Scanner(System.in);


    abstract int max_index(int n, int a[]);

    public static void main(String[] args) {
        Solution __solution = new Solution();

        // checkpoint
        System.out.printf("%d\n", 0);
        // read n
        int n;
        System.out.flush();
        n = in.nextInt();
        // for i to n {...}
        int[] a;
        a = new int[n];
        for (int i = 0; i < n; i++) {
            // read a[i]
            System.out.flush();
            a[i] = in.nextInt();
        }
        // call index = max_index(n, a)
        int index;
        index = __solution.max_index(n, a);
        // write index
        System.out.printf("%d\n", index);
        // exit
        System.exit(0);
    }
}
