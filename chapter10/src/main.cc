#include <stdio.h>
#include "util/util.h"
int main(int argc, char* argv[]) {
  int x = 1;
  int y = 22;
  int z = max(x, y);
  printf("%d, %d, max = %d\n", x, y, z);
  return 0;
}
