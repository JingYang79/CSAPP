#include <stdio.h>
#include <string.h>
int uadd_ok(unsigned x, unsigned y){//检测是否溢出
  if (x+y>=x)
    return 1;
  else
    return 0;
}
void main() {
  unsigned int x=2000000000;
  unsigned int y=3000000000;
  int z;
  z = uadd_ok(x,y);
  printf("%d\n",z);
  y=-x;
  printf("%d\n",y);
}
