#include "public_key_crypto.h"

int* public_key_crypto::create_p_q() {

    /**
        P and Q are randomly generated two large prime numbers.
    */

    int* prime = new int[2];

    prime[0] = *create_prime(RANDOM_MIN, RANDOM_MAX);
    prime[1] = *create_prime(RANDOM_MIN, RANDOM_MAX);

    return prime;

}
