#include <stdio.h>

int isPrime(int x) {
    if (x <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0; // x is divisible by i, so it's not prime
        }
    }
    return 1; // x is prime
}

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (isPrime(x)) {
        printf("%d is a prime number.\n", x);
    } else {
        printf("%d is not a prime number.\n", x);
    }

    return 0;
}
