#include "public_key_crypto.h"

int* public_key_crypto::choose_d(const int* prime) {

    /**
        D should be relatively prime to euler_phi(N).
        euler_phi(N) = euler_phi(P) * euler_phi(Q) = (P-1)(Q-1)

        Any prime number greater than max(P, Q) will be okay.
    */

    int max_prime = (prime[0] > prime[1]) ? prime[0] : prime[1];

    int* d = public_key_crypto::create_prime(max_prime, RANDOM_MAX);

    return d;

}
