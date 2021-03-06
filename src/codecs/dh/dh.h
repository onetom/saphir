/*
Simple implementation of Diffie-Hellman algorithm (c) 2013 Richard Smolak
The code uses Bigint implementation Copyright (c) 2007, Cameron Rich
*/

#include <stdint.h>
#include "../bigint/bigint.h"

typedef struct
{
	int	len;		//length of keys in bytes
	int glen;		//length of generator in bytes
    uint8_t *p;		// prime modulus
    uint8_t *g;		// generator
    uint8_t *x;		// private key
    uint8_t *gx;	// public key(self)
    uint8_t *gy;	// public key(peer)
	uint8_t *k;		// negotiated key
}
DH_CTX;


void DH_generate_key(
	DH_CTX *dh_ctx
);

void DH_compute_key(
	DH_CTX *dh_ctx
);

