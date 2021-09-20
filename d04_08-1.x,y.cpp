#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x,y;
    printf("Enter two variables x and y in order: \n");
    scanf("%f",&x);
    scanf("%f",&y);
    
    if(x < 2000 || x > 3000){
    	printf("x = %.2f \n", x);
	}
	if(y > 100 && y < 500){
		printf("y = %.2f", y);
	}
}

