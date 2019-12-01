#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
	//getchar();
	system("pause");
}