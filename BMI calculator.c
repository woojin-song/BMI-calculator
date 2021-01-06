#include <stdio.h>
int main() {
	float height, weight;
	float BMI;
	printf("신장 입력 (m) : ");
	scanf("%f", &height);
	printf("몸무게 입력 (kg) : ");
	scanf("%f", &weight);
	BMI = weight / (height * height);
	printf("당신의 BMI지수는 %.3f입니다\n.", BMI);
	return 0;
}