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

	//���
	const int year = 2007; //const : �������, �� ���� ����
	printf("�¾ �⵵ : %d\n", year);
	//year = 2000;

	//printf
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add); //3 + 7 = 10
	printf("%d + %d = %d\n", 3, 7, add); //3 + 7 = 10

	//scanf
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scnaf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);

	//����, ���ڿ�
	char c = 'A';
	printf("$c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	return 0;
}