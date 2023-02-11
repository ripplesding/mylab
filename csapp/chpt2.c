#include <stdio.h>
#include <limits.h>

#define DEMO_1

#ifdef DEMO_1
int main(){
  int x1 = 0x80000000;
  printf("Case1: x = %d, x*2 = %d\n", x1, x1*2);
  
  unsigned ux2 = 0x80000000;
  printf("Case2: ux2 = %d\n",ux2>-1);

  int x3 = 0x00000007;
  printf("Case3: x3 & 7 = %d, (x3 << 30) < 0 = %d\n", x3&7, (x3 << 30)<0);  

  int x4 = 0x80000000;
  printf("Case4: x4 > -1 = %d\n", x4 > -1);

  int x5 = 1, y5 = INT_MIN;
  printf("Case5: x5 > y5 = %d \n -x5 < -y5 = %d, -x5 = %d, -y5 = %d\n", x5 > y5, -x5 < -y5, -x5, -y5);
  int x5m = -x5, y5m = -y5;
  printf("-x5 = %d -y5 = %d -x5 < -y5 = %d\n", x5m, y5m, x5m < y5m);

  int x6 = INT_MIN;
  printf("Case6: x6 <= 0 = %d \n -x6 >= 0 = %d\n", x6 <= 0, -x6 >= 0);
  printf("x6 = %d, -x6 = %d\n",x6, -x6);

 int x7 = -8;
 printf("case7: x7 >> 3 = %d\n", x7>>3);
}

#endif

#ifdef DEMO_2
int main() {
    float sum = 0.0f;
    for (int i = 0; i < 10000; i++) sum += i + 1;
      printf("Sum: %f\n", sum);
    return 0;
}
#endif
#ifdef DEMO_3
int main() {
    double sum = 0.0L;
    for (int i = 0; i < 10000; i++) sum += i + 1;
      printf("Sum: %lf\n", sum);
    return 0;
}
#endif 	
