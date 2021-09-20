#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n,min,max;
   
    printf("How many number will you enter?: ");
    scanf("%d",&n);
    
    int ar[n];
 
    for(int i = 0; i < n; i++){
		printf("Enter num %d: ", i+1);
		scanf("%d",&ar[i]);
	}
 
    min = max = ar[0];
    for(int i=0; i < n; i++){
	    if(min > ar[i]){
		    min = ar[i];   
		}
		if(max < ar[i]){
		    max = ar[i];
		}
    }
    
    printf("\nMinimum of array is: %d", min);
    printf("\nmaximum of array is: %d", max);
}

