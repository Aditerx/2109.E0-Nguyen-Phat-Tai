#include<stdio.h>
#include<math.h>
int main()
{
	float r, S, C, pi;
	pi = 3.14;
	printf("NHap ban kinh hinh tron: ");
	scanf("%f",&r);
	S = pow(r,2) * pi;
	C = 2 * pi * r;
	printf("Chu vi la %f va dien tich la %f", C, S);
}
