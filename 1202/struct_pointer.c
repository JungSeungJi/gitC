#include <stdio.h>
#include <math.h> // sqrt() �Լ��� ���

typedef struct{
	int x, y;
}POINTER;

void main(){
	POINTER p1 = {0, 0}, p2 = {1, 1}; // ����ü ������ �ʱ�ȭ
	
	double distance, px, py;
	px = p2.x - p1.x;
	py = p2.y - p1.y;
	distance = sqrt (px * px + py * py);
	
	printf ("distance : %6.3f\n", distance);
	p1 = p2;
}
