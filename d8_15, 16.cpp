#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

void start(),cyp(),tiy(),tiy1(),tiy2();
int action();


int main()
{
    start();
    action();
}

void start(){
	printf("*Homework day8: \n");
    printf("\n1.Check your progress session 15, page 270 \n");
    printf("2.Try it yourself session 16, page 276 \n");
}

int action(){
	float input;
	do{
	printf("\nEnter 1 or 2 to view, 0 to stop: ");
    
    if(scanf("%f",&input)){
        if(input == 1){
    	    cyp();
	    }
	    else if(input == 2){
	    	printf("_______________________ \n\n");
		    tiy();
	    }
	    else if(input == 0){
		    printf("\nHave a nice day :D");
		    exit(0);
    	}
    	else{
    		printf("\nFalse input! \n");
		}
	
	}
	else{
    	printf("\nFalse input! \n");
    	fflush(stdin);
	}
    }while(1);
}

void cyp(){
	printf("\n1.funtion \n");
	printf("2.arguments \n");
	printf("3.undefined \n");
	printf("4.calling function/called function \n");
	printf("5.function prototype \n");
	printf("6.local variables \n");
	printf("7.global variables \n");
	printf("8.Scope rules \n");
	printf("9.by value \n");
	printf("10.call by reference \n");
	printf("_______________________ \n\n");
	start();
}

void tiy(){
	printf("*Try it yourself session 16, page 276: \n");
	printf("\n1.Find the area and perimeter of a circle \n");
    printf("2.Calculate the factorial of an integer \n");
    
    int inp;
	do{
	printf("\nEnter 1 or 2, 0 to exit: ");
    
    if(scanf("%d",&inp)){
        if(inp == 1){
    	    tiy1();
    	    tiy();
	    }
	    else if(inp == 2){
		    tiy2();
		    tiy();
	    }
	    else if(inp == 0){
	    	printf("_______________________ \n\n");
	    	start();
		    action();
	    }
    	else{
    		printf("\nFalse input! \n");
		}	
	}
	else{
    	printf("\nFalse input! \n");
    	fflush(stdin);
	}
    }while(1);
}

void tiy1(){
	float r, S, C, pi;
	pi = 3.14;
	printf("\nEnter radius: ");
	scanf("%f",&r);
	S = pow(r,2) * pi;
	C = 2 * pi * r;
	printf("=> Perimeter: %.2f \n   Area: %.2f \n", C, S);
	printf("_______________________ \n\n");
}

void tiy2(){
	int fac = 1, n;
	do{
	f2:
	printf("\nWhich int number's factorial would you like to see?: ");

	if(scanf("%d",&n)){
        if(n<0){
    	    printf("\nEnter an int positive num! \n");
    	    goto f2;
	    }
	    else if(n>0){
		    goto cal;
    	}
    	else{
    		printf("\nFalse input! \n");
		}
	}
	else{
    	printf("\nFalse input! \n");
    	fflush(stdin);
	}
    }while(1);
	
    cal:
	for(int i=1; i<=n; i++){
		fac = fac*i;
	}
	
	printf("=> %d! = %d \n", n, fac);
	printf("_______________________ \n\n");
}

