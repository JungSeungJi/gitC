#include <stdio.h>
#include <math.h> // sqrt() �Լ��� ���

typedef struct {
	float x, y;
} POINT;

float distance (POINT a, POINT b);
POINT midpoint (POINT a, POINT b);

void main() {
	POINT p1 = {}, p2 = {};
	
	printf("1��° x�� y�� �Է�: ");
	scanf("%f %f", &p1.x, &p1.y);
	printf("2��° x�� y�� �Է�: ");
	scanf("%f %f", &p2.x, &p2.y);
	
	a = p2.x - p1.x;
	b = p2.y - p1.y;
	distance = sqrt (a * a + b * b);
	printf ("distance : %6.3f\n", distance);
	p1 = p2;
	
	a = (p2.x + p1.x)/2;
	b = (p2.y + p1.y)/2;
	midpoint = sqrt (a * a + b * b);
	printf ("distance : %6.3f\n", midpoint);
	
}

