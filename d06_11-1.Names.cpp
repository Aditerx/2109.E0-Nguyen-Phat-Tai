#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(){
	int n;
	printf("How many names do you want to sort?: ");
	scanf("%d", &n);
	fflush(stdin);
	
	char list[n][20];
	
	for(int i=0; i<n; i++){
		printf("Enter name %d: ", i+1);
		gets(list[i]);
	}
		
	char temp[20];
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			if(strcmp(list[i], list[j]) > 0){
				strcpy(temp, list[i]);
				strcpy(list[i], list[j]);
				strcpy(list[j], temp);
			}
		}
	}
	
	printf("\nYour name list: \n");
	for(int i=0; i<n; i++){
		printf("%d.%s \n", i+1, list[i]);
	}	
}

