#include <cstdio>
#include <cstdlib>

int collatz(int n);

int main() {
    // checkpoint
    printf("%d\n", 0);
    // read n
    static int n;
    fflush(stdout);
    scanf("%d", &n);
    // call iterazioni = collatz(n)
    static int iterazioni;
    iterazioni = collatz(n);
    // write iterazioni
    printf("%d\n", iterazioni);
    // exit
    exit(0);
}
