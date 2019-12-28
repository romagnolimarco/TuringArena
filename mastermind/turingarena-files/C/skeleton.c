#include <stdio.h>
#include <stdlib.h>


int play(int blackScore(int c1, int c2, int c3, int c4), int whiteScore(int c1, int c2, int c3, int c4));


int main() {
    // checkpoint
    printf("%d\n", 0);
    // call ans = play() callbacks {...}
    static int ans;
    {
        int blackScore(int c1, int c2, int c3, int c4) {
            // callback blackScore
            printf("%d %d\n", 1, 0);
            // write c1, c2, c3, c4
            printf("%d %d %d %d\n", c1, c2, c3, c4);
            // read ans
            static int ans;
            fflush(stdout);
            scanf("%d", &ans);
            // return ans
            return ans;
        }
        int whiteScore(int c1, int c2, int c3, int c4) {
            // callback whiteScore
            printf("%d %d\n", 1, 1);
            // write c1, c2, c3, c4
            printf("%d %d %d %d\n", c1, c2, c3, c4);
            // read ans
            static int ans;
            fflush(stdout);
            scanf("%d", &ans);
            // return ans
            return ans;
        }
        ans = play(blackScore, whiteScore);
    }
    // no more callbacks
    printf("%d %d\n", 0, 0);
    // write ans
    printf("%d\n", ans);
    // exit
    exit(0);
}
