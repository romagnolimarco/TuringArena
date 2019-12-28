import java.util.Scanner;

abstract class Skeleton {
    private static final Scanner in = new Scanner(System.in);


    interface PlayCallbacks {
        int blackScore(int c1, int c2, int c3, int c4);
        int whiteScore(int c1, int c2, int c3, int c4);
    }
    abstract int play(PlayCallbacks callbacks);

    public static void main(String[] args) {
        Solution __solution = new Solution();

        // checkpoint
        System.out.printf("%d\n", 0);
        // call ans = play() callbacks {...}
        int ans;
        PlayCallbacks playCallbacks = new PlayCallbacks() {
            public int blackScore(int c1, int c2, int c3, int c4) {
                // callback blackScore
                System.out.printf("%d %d\n", 1, 0);
                // write c1, c2, c3, c4
                System.out.printf("%d %d %d %d\n", c1, c2, c3, c4);
                // read ans
                int ans;
                System.out.flush();
                ans = in.nextInt();
                // return ans
                return ans;
            }
            public int whiteScore(int c1, int c2, int c3, int c4) {
                // callback whiteScore
                System.out.printf("%d %d\n", 1, 1);
                // write c1, c2, c3, c4
                System.out.printf("%d %d %d %d\n", c1, c2, c3, c4);
                // read ans
                int ans;
                System.out.flush();
                ans = in.nextInt();
                // return ans
                return ans;
            }
        };
        ans = __solution.play( playCallbacks);
        // no more callbacks
        System.out.printf("%d %d\n", 0, 0);
        // write ans
        System.out.printf("%d\n", ans);
        // exit
        System.exit(0);
    }
}
