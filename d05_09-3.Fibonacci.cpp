#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int f0 = 0, f1 = 1, fnext, n;
    printf("Enter the n of the Fn you want to print to: ");
    scanf("%d", &n);
    
    if(n == 0){
    	printf("Fibonacci numbers: %d", f0);
	}
	else if(n == 1){
    	printf("Fibonacci numbers: %d %d ", f0, f1);
	}
	else{
    	fnext = f1 + f0;
    	printf("Fibonacci numbers: %d %d %d ", f0, f1, fnext);
	}
	
    for(int i = 3; i <= n; i++){
    	f0 = f1;
    	f1 = fnext;
    	fnext = f0 + f1;
    	printf("%d ", fnext);
	}
}

