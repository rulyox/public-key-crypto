# Public Key Crypto

This program is an implementation of the paper "A Method for Obtaining Digital Signatures and Public-Key Cryptosystems".

## create_p_q

Create two large prime numbers `p` and `q`.

## calculate_n

Calculate `n`.

## choose_d

Choose `d` which is relatively prime to `euler_phi(n)`.


## calculate_e

Calculate `e` which is the multiplicative inverse of `d` under modulo `euler_phi(n)`.
