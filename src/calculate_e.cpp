#include <iostream>
#include "public_key_crypto.h"

ll extended_euclid_algorithm(ll a, ll b);

ll* public_key_crypto::calculate_e(const int* prime, const int* d) {

    /**
        Since D is relatively prime to euler_phi(N), it has a multiplicative inverse.
        E is the multiplicative inverse of D, modulo euler_phi(N).
        ED = 1 (mod euler_phi(N))
    */

    int euler_phi_p = prime[0] - 1;
    int euler_phi_q = prime[1] - 1;
    ll euler_phi_n = (ll) euler_phi_p * (ll) euler_phi_q;

    ll* e = new ll;
    *e = extended_euclid_algorithm(euler_phi_n, *d);

    return e;

}

ll extended_euclid_algorithm(ll a, ll b) {

    /**
        X1 = Y1 * X1 + Z1 * X2
        X2 = Y2 * X1 + Z2 * X2

        Update values until X2 is 0.
        new X = X1 - X2 * Q
        X1 = X2, X2 = new X (same for Y, Z)
    */

    ll x1 , y1, z1, x2, y2, z2;

    x1 = a;
    x2 = b;
    y1 = 1;
    y2 = 0;
    z1 = 0;
    z2 = 1;

    while(x2 > 0) {

        ll q = x1 / x2;

        ll x = x1 - x2 * q;
        x1 = x2;
        x2 = x;

        ll y = y1 - y2 * q;
        y1 = y2;
        y2 = y;

        ll z = z1 - z2 * q;
        z1 = z2;
        z2 = z;

    }

    if(z1 < 0) z1 += a;

    return z1;

}
