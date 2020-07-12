#include <iostream>
#include "public_key_crypto.h"

int main() {

    // create_p_q
    std::cout << "Create two large prime numbers." << std::endl;
    int* prime = public_key_crypto::create_p_q();
    std::cout << "p = " << prime[0] << std::endl << "q = " << prime[1] << std::endl << std::endl;

    // calculate_n
    std::cout << "Calculate n." << std::endl;
    ll* n = public_key_crypto::calculate_n(prime);
    std::cout << "n = " << *n << std::endl << std::endl;

    // choose_d
    std::cout << "Choose d." << std::endl;
    int* d = public_key_crypto::choose_d(prime);
    std::cout << "d = " << *d << std::endl << std::endl;

    // calculate_e
    std::cout << "Calculate e." << std::endl;
    ll* e = public_key_crypto::calculate_e(prime, d);
    std::cout << "e = " << *e << std::endl << std::endl;

    // clean
    delete[] prime;
    delete n;
    delete d;
    delete e;

    return 0;

}
