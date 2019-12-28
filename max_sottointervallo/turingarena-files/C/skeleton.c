#include <stdio.h>
#include <stdlib.h>


int max_sottointervallo(int N, int *seq);


int main() {
    // checkpoint
    printf("%d\n", 0);
    // read N
    static int N;
    fflush(stdout);
    scanf("%d", &N);
    // for i to N {...}
    static int *seq;
    seq = malloc(N * sizeof(*seq));
    for (int i = 0; i < N; i++) {
        // read seq[i]
        fflush(stdout);
        scanf("%d", &seq[i]);
    }
    // call index = max_sottointervallo(N, seq)
    static int index;
    index = max_sottointervallo(N, seq);
    // write index
    printf("%d\n", index);
    // exit
    exit(0);
}
