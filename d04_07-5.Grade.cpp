#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    float m;
    printf("Enter your mark: ");
    scanf("%f",&m);
    
    if(m > 100){
    	printf("Invalid mark, please rerun the program");
	}
    else if(m > 75){
		printf("Your grade is A");
	}
    else if(m > 60){
    	printf("Your grade is B");
	}
    else if(m > 45){
    	printf("Your grade is C");
	}
    else if(m > 35){
    	printf("Your grade is D");
	}
    else{
    	printf("Your grade is E");
	}
}

