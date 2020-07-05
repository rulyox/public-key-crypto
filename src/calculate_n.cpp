#include "public_key_crypto.h"

ull* public_key_crypto::calculate_n(const int* prime) {

    /**
        N = PQ
    */

    ull* n = new ull;
    *n = (ull) prime[0] * (ull) prime[1];

    return n;

}
