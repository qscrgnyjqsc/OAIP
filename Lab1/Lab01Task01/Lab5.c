#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	float P = 3.14;
	float S, R, V;
	printf("Enter radius R = ");
	scanf("%f", &R);
	V = 4 / 3 * P * pow(R, 3);
	S = 4 * pow(R, 2) * P;
	printf("Square S = %.2f \n", S);
	printf("Volume V = %.2f \n", V);
	return 0;
}
