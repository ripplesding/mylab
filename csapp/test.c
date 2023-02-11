#include <stdio.h>

int main(){
  int x = 0x80000000;
  int y = x >> 31;
  
  printf("!x = %d\n",!x);
  printf("x>>31 = %d\n", y);
}
