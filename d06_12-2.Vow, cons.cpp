#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("___This is a program to count the number of vowels and consonants in a word___ \n\n");
	
    char input[100];
    int vow = 0, cons = 0;
    
    printf("Enter a word, if you enter a line of word it will only count the first word: \n => ");
    scanf("%s", input);
    
    for(int i = 0; i < strlen(input); i++){
    	
    	if(input[i] >= 0 && input[i] <= 64 || input[i] > 123){
    	printf("\nThe program only count letters in a word, please rerun and type again");
    	exit(0);
	}
    	
    	switch(input[i]){
    		case 'u':
    		case 'o':
    		case 'e':
    		case 'a':
    		case 'i':
    		case 'U':
    		case 'O':
    		case 'E':
    		case 'A':
    		case 'I':
    			vow++; break;
    		default:
    			cons++;
		}
	}
	
	printf("\nYour word have %d vowels and %d consonants", vow, cons);
}
