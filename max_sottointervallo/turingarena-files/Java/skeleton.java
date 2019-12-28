import java.util.Scanner;

abstract class Skeleton {
    private static final Scanner in = new Scanner(System.in);


    abstract int max_sottointervallo(int N, int seq[]);

    public static void main(String[] args) {
        Solution __solution = new Solution();

        // checkpoint
        System.out.printf("%d\n", 0);
        // read N
        int N;
        System.out.flush();
        N = in.nextInt();
        // for i to N {...}
        int[] seq;
        seq = new int[N];
        for (int i = 0; i < N; i++) {
            // read seq[i]
            System.out.flush();
            seq[i] = in.nextInt();
        }
        // call index = max_sottointervallo(N, seq)
        int index;
        index = __solution.max_sottointervallo(N, seq);
        // write index
        System.out.printf("%d\n", index);
        // exit
        System.exit(0);
    }
}
