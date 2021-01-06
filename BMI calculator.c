#include <stdio.h>
int main() {
	float height, weight;
	float BMI;
	printf("Enter your height. (m) : ");
	scanf("%f", &height);
	printf("Enter your weight. (kg) : ");
	scanf("%f", &weight);
	BMI = weight / (height * height);
	printf("Your BMI is %.3f\n", BMI);
	return 0;
}
