#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Nhap lan luot 2 so a va b: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    
    c = a * b;
    if(c > 1000){
    	printf("=> a * b = %.2f lon hon 1000",c);
	}
	else if(c < 1000){
		printf("=> a * b = %.2f be hon 1000",c);
	}
	else{
		printf("=> a * b = %.2f bang 1000",c);
	}
}

