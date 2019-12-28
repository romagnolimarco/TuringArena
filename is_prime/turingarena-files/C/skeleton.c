#include <stdio.h>
#include <stdlib.h>


int is_prime(int n);


int main() {
    // checkpoint
    printf("%d\n", 0);
    // read n
    static int n;
    fflush(stdout);
    scanf("%d", &n);
    // call prime = is_prime(n)
    static int prime;
    prime = is_prime(n);
    // write prime
    printf("%d\n", prime);
    // exit
    exit(0);
}
