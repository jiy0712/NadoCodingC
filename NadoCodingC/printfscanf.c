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

	//상수
	const int year = 2007; //const : 상수선언, 값 변경 금지
	printf("태어난 년도 : %d\n", year);
	//year = 2000;

	//printf
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add); //3 + 7 = 10
	printf("%d + %d = %d\n", 3, 7, add); //3 + 7 = 10

	//scanf
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scnaf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);

	//문자, 문자열
	char c = 'A';
	printf("$c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	return 0;
}