#include <stdio.h>
void main(){
	int num;
	char name[15] , age[15], sch[15] , fr[15];
	
	FILE *fpin, *fpout;
	fpin = fopen ("student.txt", "r");
	fpout = fopen ("end.txt", "w");

	while(!feof (fpin)){
		fscanf(fpin, "%s %s %s %s" , name, age, fr, sch); 
		printf("%s ������ �Է��Ͻÿ� : " , name);
		scanf("%d" , &num);
		fprintf (fpout, "%s %d�� %s %s \n", name , num ,sch ,fr);
	}
	
	fclose (fpin);
	fclose (fpout);
}
