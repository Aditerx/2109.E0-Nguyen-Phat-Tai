#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    float num1, num2;
	int start, end, sum = 0;
    printf("Enter 2 number in order, the program will find the sum of all odd numbers between the two numbers entered: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    
    if(num1 > num2){
    	start = num2;
    	end = num1;
	}
	else if(num1 == num2){
		printf("Your numbers are equal, there's no space between them");
	}
	else{
		start = num1;
    	end = num2;
	}
	
	for(int i = start;i <= end; i++){
		if(i%2 != 0){
			sum += i;
		}
	}
	
	printf("Sum = %d", sum);
}

