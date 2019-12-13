#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//宏定义
#define BOOL int
#define TRUE 1
#define FALSE 0
void main() {
	printf("hello c!\n");
	printf("北京\t上海\t天津\n");
	double result = pow(2.0, 3.0);
	printf("%.2f \n", result);
	int num = 1;
	double score = 2.3;
	char gender = 'A';
	char name[] = "pengx";
	printf("num=%d score=%.2f gender=%c name=%s \n", num, score, gender, name);
	printf("int类型的长度=%d", sizeof(int));
	//getchar();
	int isPass = 1;
	if (isPass) {//C语言中0表示假，非0表示真
		printf("通过考试！");
	}
	BOOL isOk = TRUE;
	if (isOk) {
		printf("ok!");
	}
	system("pause");
}