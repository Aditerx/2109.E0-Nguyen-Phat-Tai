#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main() {
	int a;
	printf("Nhap 1 so nguyen: ");
	scanf("%d",&a);


	int soNT=1; //gia su a la so nguyen to
	
	for(int i = 2; i <= sqrt(a); i++) {
		if(a%i == 0) {
			soNT=0;
			break;
		}
	}
	
	if(soNT==1) {
		printf("%d la so nguyen to", a);
	} else {
		printf("%d KHONG PHAI la so nguyen to", a);
	}
}
