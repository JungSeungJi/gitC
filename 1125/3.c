#include <stdio.h>

void main(){
	int i;
	char df[50]={0,};
	
	FILE *fpin, *fpout; // ���� ������ ������ ����
	fpin = fopen ("Datafile.txt", "r");
	fpout = fopen ("copied.txt", "w");
	
	while(!feof (fpin)){
		for(i=0; i<10; i++){
			fgets(df, sizeof(df), fpin);
			fputs(df, fpout);
			break;
		}
	}
	
	printf("END");
	fclose (fpin);
	fclose (fpout);
}

