// ������ ���Ͽ��� �����Կ� Ű�� �о� ���� üũ�ϴ� ���α׷�
#include <math.h> // sin() �Լ� ���
#include <stdio.h>
typedef struct{
	char name [20];
	float height;
	float weight;
}STUDENT;

void main (){
	STUDENT st, *sp; // st�� .���� ����, sp�� �����ʹϱ� ȭ��ǥ�� ���� (�ּҴ� ȭ��ǥ) 
	int i = 0;
	sp = &st; // sp�� ����ü ���� st�� �ּҸ� ���´�.
	
	scanf ("%s %f %f", sp->name, &sp->height, &sp->weight);
	printf ("student name : %s\n", sp->name);
	printf ("Height : %3.1f \nWeight : %3.1f\n", sp->height, sp->weight);
	if ((sp->height - 109) + 10 <= sp->weight){
		printf ("You are fat.. You need diet!!!\n\n");
		//�߷�//
	}
}
	

