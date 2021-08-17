#include <stdio.h>

  int main() {
  double ENTRADA[100];
  int i;
    for(i = 0; i <= 99; i++)
      scanf("%lf", &ENTRADA[i]);
    for(i = 0; i <= 99; i++) {
    if(ENTRADA[i] <= 10.0)
      printf("A[%d] = %.1lf\n",i, ENTRADA[i]);
    }
    return 0;
}