#include <stdio.h>
#include <math.h>

int main() {
     float sum=0, n=0;
     do {
          n++;
          sum = sum + 1.0 / n;
     } while(sum <= 5);
     printf("Slagaemih -  %0.0f\n", n);
     system("pause");
     return 0;
}