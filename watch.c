int main() {
  int a = 1;
  for (int i = 0; i < 20; ++i) {
    if ((i & 3) == 0) {
      a = i;
    }
  }
  return a;
}
/*
gdb watch
b main
r
watch a
c
//----
r
b main
watch (a > 10)
c
*/
