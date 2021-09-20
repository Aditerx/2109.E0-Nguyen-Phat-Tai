#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(){  
    for(int i = 7; i >= 0; i--){
    	for(int j = 0; j < i; j++){
    		printf("*");
		}
	printf("\n");
	}
}
