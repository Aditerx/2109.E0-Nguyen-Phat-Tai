#include <stdio.h>
int main()
{
 float input, f, i;
 printf("Input: ");
 scanf("%f",&input);
 f = input / 2.54 / 12;
 i = input / 2.54;
 printf("%.1f centimeters = %.1f feet = %.1f inches", input, f, i);
}
