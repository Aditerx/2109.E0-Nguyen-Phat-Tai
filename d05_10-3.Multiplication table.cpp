#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
	float num;
	int times;
    printf("What number's multiplication table do you want to see?: ");
    scanf("%f",&num);
    printf("How many times do you want to see?: ");
    scanf("%d",&times);
    
    for(int i = 1; i <= times; i++){
    	printf("%.1f x %d = %.1f \n", num, i, num * i);
	}
}

