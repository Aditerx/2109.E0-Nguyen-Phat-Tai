#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("Nhap lan luot 2 so a va b: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    
    if(a%b == 0){
    	printf("a chia het cho b");
	}
	else{
		printf("a khong chia het cho b");
	}
}

