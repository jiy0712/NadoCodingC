#include <stdio.h>
int main(void) {

	printf("Hello World\n");

	//정수형 변수
	int age = 12;
	printf("%d\n", age); //12
	age = 13;
	printf("%d\n", age); //13

	/* 여러
		줄
	   주석 */

	//실수형 변수
	float f = 46.5;
	printf("%f\n", f); //46.500000
	printf("%.2f\n", f); //46.50, .2 : 소수점 2자리수까지

	double d = 4.428;
	printf("%.2f\n", d); //4.43, 반올림하여 나옴
	return 0;
}