#include <stdio.h>
int main(void) {

	printf("Hello World\n");

	//������ ����
	int age = 12;
	printf("%d\n", age); //12
	age = 13;
	printf("%d\n", age); //13

	/* ����
		��
	   �ּ� */

	//�Ǽ��� ����
	float f = 46.5;
	printf("%f\n", f); //46.500000
	printf("%.2f\n", f); //46.50, .2 : �Ҽ��� 2�ڸ�������

	double d = 4.428;
	printf("%.2f\n", d); //4.43, �ݿø��Ͽ� ����
	return 0;
}