#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    char gr;
    float sal,tsal;
    printf("Enter your salary: ");
    scanf("%f",&sal);
    fflush(stdin);
    printf("Enter your grade (Enter an upper cased grade): ");
    gr = getche();
    
	if(gr >= 'A' && gr <= 'Z'){
		if(gr == 'A'){
			tsal = sal + 300;
			printf("\nYour allowance is 300, total salary: %.2f", tsal);
    	}
	    else if(gr == 'B'){
			tsal = sal + 250;
			printf("\nYour allowance is 250, total salary: %.2f", tsal);
    	}
    	else{
			tsal = sal + 100;
			printf("\nYour allowance is 100, total salary: %.2f", tsal);
    	}
	}
	else if(gr >= 'a' && gr <= 'z'){
		printf("\nPlease rerun the program and enter your grade upper cased");
	}
	else{
		printf("\nInvalid grade, please rerun the program");
	}
}

