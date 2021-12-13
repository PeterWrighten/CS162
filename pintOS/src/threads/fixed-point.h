#include <stdint.h>
#define F 16384


/* a's and b's represent floating points */
/* x are integers */

int int_to_fp(int a);
int int_fl(int a);
int int_rd(int a);

int add_fi(int a, int b);
int sub_fi(int a, int b);
int mul_fi(int a, int b);
int div_fi(int a, int b);


int add_fp(int a, int b);
int sub_fp(int a, int b);
int mul_fp(int a, int b);
int div_fp(int a, int b);


int int_to_fp (int x) {
  return x * F;
}


int int_fl(int a) {
  return a / F;
}


int int_rd(int a) {
  if (a>=0)
    return (a + F/2) / F;

  else
    return (a - F/2) / F;
}


int add_fi (int a, int x) {
  return a + x * F;
}


int sub_fi (int a, int x) {
  return a - x * F;
}


int mul_fi (int a, int x) {
  return a * x;
}


int div_fi (int a, int x) {
  return a / x;
}


/****************************************************/


int add_fp (int a, int b) {
  return a + b;
}


int sub_fp (int a, int b) {
  return a - b;
}


int mul_fp (int a, int b) {
  return ((int64_t) a) * b / F;
}


int div_fp (int a, int b) {
  return ((int64_t) a) * F / b;
}
