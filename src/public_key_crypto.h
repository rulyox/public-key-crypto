#ifndef PUBLIC_KEY_CRYPTO_H
#define PUBLIC_KEY_CRYPTO_H

#define ull unsigned long long
#define RANDOM_MIN 100000000
#define RANDOM_MAX 999999999

namespace public_key_crypto {

    int* create_prime(int min, int max);

    int* create_p_q();
    ull* calculate_n(const int* prime);
    int* choose_d(const int* prime);

}

#endif //PUBLIC_KEY_CRYPTO_H
