#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
     int n=0;
     float sum=0;
     
     do {
          n++;
          sum = sum + (float)1 / (float)n;
     } while(sum <= 5);
     
     printf("Slagaemih -  %d\r\n", n);
     system("pause");
     return 0;
}