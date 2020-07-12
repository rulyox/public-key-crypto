#include "public_key_crypto.h"

ll* public_key_crypto::calculate_n(const int* prime) {

    /**
        N = PQ
    */

    ll* n = new ll;
    *n = (ll) prime[0] * (ll) prime[1];

    return n;

}
