
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(){
	int a, b;
	
	printf("a) \n");	
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= i; j++){
			printf("%d", j);
		}
	printf("\n");
	}
	
	printf("\nb) \n");	
	for(int i = 5; i > 0; i--){
		for(int j = 1; j <= i; j++){
			printf("%d", j);
		}
	printf("\n");
	}
}
