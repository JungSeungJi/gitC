#include <stdio.h>

void circumference(int radius, double *circle);

void main(){
	int num;
	double c = 0;
	
	printf("���� �������� �Է�: ");
	scanf("%d", &num);
	circumference(num, &c);
	printf("���� �ѷ�: %f\n", c);
}

void circumference(int radius, double *circle){
	*circle = 2*3.14*radius;
}
