#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
 int a = INT_MAX;
 float b = FLT_MAX;
 double c = DBL_MAX;
 printf(" size of int = %lu\n size of float = %lu\n size of double = %lu\n", sizeof(a), sizeof(b), sizeof(c));
 printf(" maximum value of int = %lu\n maximum value of float = %f\n maximum value of double = %f\n", a, b, c);
 return 0;
}
