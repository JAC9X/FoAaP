#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main()  
{  
 float x, y;  
 printf("Enter x ");  
scanf("%f", &x);  
printf("Enter y ");  
scanf("%f", &y); 
  
if (pow(x,2) + pow(y,2)-1 < 0.000001) 
 printf("Mozhno"); 
else  
 printf("Nelzia");
 system("pause"); 
 return 0;
}