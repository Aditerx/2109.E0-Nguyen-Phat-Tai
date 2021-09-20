#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap so sao in giam dan: ");
    scanf("%d",&n);
    
    for(int i = n; i >= 0; i--){
    	for(int j = 0; j < i; j++){
    		printf("* ");
		}
	printf("\n");
	}
}

