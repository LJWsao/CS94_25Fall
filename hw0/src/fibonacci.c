#include <stdio.h>
#include <stdlib.h>

void usage(char *arg_0) {
  printf("usage: ./%s <n>\nn -- Compute the nth Fibonacci number, n>=0", arg_0);
  return;
}

int Fibonacci(int n) {
  // //your solution here!
 if (n == 0) {
    return 0;
 } 
 return Fibonacci(n-2) + Fibonacci(n-1);
/*
 * Note that the 47th fibonacci number outputs a negative value because
 * it is larger than the maximum value for a 32 bit (4 byte) signed integer.
 * As a result there is a integer overflow that causes the value to wrap and become negative.
 */
}

int main(int argc, char *argv[]) {
  int n;
  if (argc != 2) {
    usage(argv[0]);
    return 0;
  }
  // Parse the value of n here using atoi!
  n = atoi(argv[0]);

  if (n < 0) {
    usage(argv[0]);
    return 0;
  }
  int result = Fibonacci(n);
  printf("%d\n", result);
  return 0;
}
