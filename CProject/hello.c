#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//�궨��
#define BOOL int
#define TRUE 1
#define FALSE 0
void main() {
	printf("hello c!\n");
	printf("����\t�Ϻ�\t���\n");
	double result = pow(2.0, 3.0);
	printf("%.2f \n", result);
	int num = 1;
	double score = 2.3;
	char gender = 'A';
	char name[] = "pengx";
	printf("num=%d score=%.2f gender=%c name=%s \n", num, score, gender, name);
	printf("int���͵ĳ���=%d", sizeof(int));
	//getchar();
	int isPass = 1;
	if (isPass) {//C������0��ʾ�٣���0��ʾ��
		printf("ͨ�����ԣ�");
	}
	BOOL isOk = TRUE;
	if (isOk) {
		printf("ok!");
	}
	system("pause");
}