/*
 * AddressErrorException.c
 *
 * Exec a simple program.  Return the result of Exec.
 */

#include "syscall.h"

int
main()
{
  int result = 1000;
  result = Exec("../test/AddressErrorException_SingleProcess", 0, 0, 0);
  Exit(result);
}
