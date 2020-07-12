# Public Key Crypto

This program is an implementation of the paper "A Method for Obtaining Digital Signatures and Public-Key Cryptosystems".

## Example

```
Create two large prime numbers.
p = 505619623
q = 599123783

Calculate n.
n = 302928741290793809

Choose d.
d = 669812621

Calculate e.
e = 187574138517270341
```

## Algorithm

### create_p_q

Create two large prime numbers `p` and `q`.

### calculate_n

Calculate `n`.

### choose_d

Choose `d` which is relatively prime to `euler_phi(n)`.

### calculate_e

Calculate `e` which is the multiplicative inverse of `d` under modulo `euler_phi(n)`.
