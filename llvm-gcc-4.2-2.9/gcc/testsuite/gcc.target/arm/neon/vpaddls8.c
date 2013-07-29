/* APPLE LOCAL file v7 merge */
/* Test the `vpaddls8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vpaddls8 (void)
{
  int16x4_t out_int16x4_t;
  int8x8_t arg0_int8x8_t;

  out_int16x4_t = vpaddl_s8 (arg0_int8x8_t);
}

/* { dg-final { scan-assembler "vpaddl\.s8\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */