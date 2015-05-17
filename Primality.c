#include <math.h> // Why ? look at line 13

int isPrime(long long int n) {
    if (n <= 1) {
        return 0;
    }
    else if (n <= 3) {
        return 1;
    }
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        return 0;
    }
    long long int a = sqrt(n); // That's why
    for (long long int i = 11; i <= a; i+=6) {
        if (n % i == 0 || n % (i+2) == 0) {
            return 0;
        }
    }
    return 1;
}
