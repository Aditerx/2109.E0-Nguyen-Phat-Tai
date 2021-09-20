#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int age;
    char name[20];
    printf("Enter your name and age in order (age is an integer number): \n");
    scanf("%[^\n]s",name);
    fflush(stdin);
    scanf("%d",&age);
    
    printf("Your name is going to be print %d times: \n", age);
    
    for(int i = 1; i <= age; i++){
    	printf("%s \n", name);
	}
}

