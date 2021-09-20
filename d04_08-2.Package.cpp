#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    char i;
    printf("Type in a letter of the alphabet: ");
    i = getche();
    
    switch(i){
    	case 'A':    		
    	case 'a':
		    printf("\nAvailable package: Ada"); break;
		case 'B':
		case 'b':
	      	printf("\nAvailable package: Basic");	break;
	    case 'C':
	    case 'c':
	    	printf("\nAvailable package: COBOL"); break;
	    case 'D':
	    case 'd':
	    	printf("\nAvailable package: dBASE III"); break;
	    case 'F':
	    case 'f':
		    printf("\nAvailable package: Fortran"); break;
		case 'P':
		case 'p':
		    printf("\nAvailable package: Pascal"); break;
		case 'V':
		case 'v':
		    printf("\nAvailable package: Visual C++"); break;
		default:
	    	printf("\nNo package available");
	}
}

