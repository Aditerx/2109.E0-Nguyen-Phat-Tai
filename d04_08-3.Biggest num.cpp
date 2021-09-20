#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Enter 3 variables in order: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    if(a > b && a > b){
    	printf("%.2f is the biggest number", a);
	}
	if(b > a && b > c){
    	printf("%.2f is the biggest number", b);
	}
	if(c > b && c > b){
    	printf("%.2f is the biggest number", c);
	}
}

