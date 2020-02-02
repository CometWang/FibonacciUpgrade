//
// Created by apple on 2020-02-01.
//
//name: Jia Wang #: 251041197
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <gmpxx.h>
#include <vector>
#include <map>
// -lgmp

static void fibonacci4(size_t N) {
    int index = N;
    __mpz_struct buf[7];
    mpz_ptr a = &buf[0];
    mpz_ptr b = &buf[1];
    mpz_ptr p = &buf[2];
    mpz_ptr q = &buf[3];
    mpz_ptr tmp0 = &buf[4];
    mpz_ptr tmp1 = &buf[5];
    mpz_ptr tmp2 = &buf[6];

    mpz_init_set_ui(a, 1);
    mpz_init_set_ui(b, 0);
    mpz_init_set_ui(p, 0);
    mpz_init_set_ui(q, 1);
    mpz_init(tmp0);
    mpz_init(tmp1);
    mpz_init(tmp2);

    while (N != 0) {
        if ((N % 2) == 0) {
            mpz_mul(tmp0, p, p); // p * p
            mpz_mul(tmp1, q, q); // q * q
            mpz_mul(tmp2, p, q); // p * q

            mpz_add(p, tmp0, tmp1);
            mpz_add(q, tmp2, tmp2);
            mpz_add(q, q, tmp1);
            N = N / 2;
        } else {
            mpz_mul(tmp0, b, q);
            mpz_mul(tmp1, a, q);
            mpz_mul(tmp2, a, p);


            mpz_add(a, tmp0, tmp1);
            mpz_add(a, a, tmp2);
            mpz_mul(b, b, p);
            mpz_add(b, b, tmp1);
            N = N - 1;
        }
    }

    gmp_printf("F(%d) = %Zd\n",index, b);

    for (size_t i = 0; i < 7; i++) {
        mpz_clear(&buf[i]);
    }
}
int main() {
        for (int i =0; i<=300;i++){
            fibonacci4(i);
        }

    return 0;
}

