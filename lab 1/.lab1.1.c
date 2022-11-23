#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <locale.h> 
 
void main(void) { 
     setlocale(LC_ALL,"Russian"); 
     float x,a; 
     
     printf("vvedite peremennyiu x>0:"); 
     scanf("%f",&x); 
     a=32*pow(x,6); 
     printf("Rezultat a:%0.3f",a); 
     }
