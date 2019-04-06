#include <stdio.h>
void coredump(int a, int *b) {
  int *s = 0;
  *s = 1;
}

int add(int a, int *b, int *c) {
  int d = 0;
  d = a + *b;
  *c = d;
  return d;
}
int main() {
  int a = 1;
  int b = 2;
  int c = 0;
  int s = -1;
  s = add(a, &b, &c);
  printf("s: %d\n", s);
  printf("c: %d\n", c);
  coredump(a, &b);
  return 0;
}
