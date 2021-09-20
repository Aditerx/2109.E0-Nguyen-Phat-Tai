#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Enter 2 number a and b in order: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    
    if(a > b){
    	c = a - b;
    	printf("a is %.2f more than b \n", c);
    	if(c == a){
    		printf("Difference is equal to value a");
		}
		else if(c == b){
			printf("Difference is equal to value b");
		}
		else{
			printf("Difference is not equal to any of the values entered");
		}
    }
	else if(a < b){
		c = b - a;
		printf("b is %.2f more than a \n", c);
		if(c == a){
    		printf("Difference is equal to value a");
		}
		else if(c == b){
			printf("Difference is equal to value b");
		}
		else{
			printf("Difference is not equal to any of the values entered");
		}
	}
	else{
		printf("a is equal to b, difference is 0");
	}
}

