#include<stdio.h>
int main() {
	float x1, x2, y1, y2;
	float j = 0;
	printf("Population of A : ");
	scanf_s("%f", &x1);
	puts("Growth rate(%) : ");
	scanf_s("%f", &y1);
	printf("Population of B : ");
	scanf_s("%f", &x2);
	puts("Growth rate(%) : ");
	scanf_s("%f", &y2);
	printf("Year 0, A = %.2f ,B = %.2f \n", x1, x2);
	(y1 /= 100) += 1;
	(y2 /= 100) += 1;
	while (x1 <= x2) {
		x1 *= y1;
		x2 *= y2;
		j++;
		printf("Year %.0f, A = %.2f ,B = %.2f", j, x1, x2);
		printf("\n");
	}
	printf("Duration = %.0f years", j);
	return 0;
}