#include <stdio.h>
int searchMaxNumber (int x, int y, int z);
int searchMaxNumber (int x, int y, int z){
	if(x>y)
		if(x>z)
			return x;
		else if(x<z)
			return z;
	else
		if(y>z)
			return y;
		else if(y<z)
			return z;
}

int main (void){
	int a, b, c;
	printf("3���� ���� �Է� ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("���� ū ��: %d ", searchMaxNumber(a,b,c));
}


