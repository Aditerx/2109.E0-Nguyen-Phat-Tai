#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float denta,x1,x2;
    printf("Nhap lan luot a, b va c: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    denta = (float)pow(b,2)-(4*a*c);
    printf("Denta = %.2f \n", denta);
    
    if(denta < 0){
    	printf("Phuong trinh vo nghiem");
	}
	else if(denta == 0){
		printf("Phuong trinh co nghiem kep x1 = x2 = %.2f",-(float)b/(2*a));
	}
	else{
		printf("Can bac 2 cua %.2f la: %.2f \n", denta, sqrt(denta));
		x1 = (float)(-b + sqrt(denta)) / (2*a);
		x2 = (float)(-b - sqrt(denta)) / (2*a);
		printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f", x1, x2);
	}
}
