#include <stdio.h>
#include <stdlib.h>


int max_index(int n, int *a);


int main() {
    // checkpoint
    printf("%d\n", 0);
    // read n
    static int n;
    fflush(stdout);
    scanf("%d", &n);
    // for i to n {...}
    static int *a;
    a = malloc(n * sizeof(*a));
    for (int i = 0; i < n; i++) {
        // read a[i]
        fflush(stdout);
        scanf("%d", &a[i]);
    }
    // call index = max_index(n, a)
    static int index;
    index = max_index(n, a);
    // write index
    printf("%d\n", index);
    // exit
    exit(0);
}
