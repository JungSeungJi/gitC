#include <stdio.h>

void main(){
	int i, line=0, count;
	char df[50]={0,};
	 // 10���ڷ� ������ �迭 ����
	FILE *fpin; // ���� ������ ������ ����
	fpin = fopen ("Datafile.txt", "r");
	
	while (!feof (fpin)){
		count =0;
		line++;
		fgets(df, sizeof(df), fpin);
		for(i=0; i<strlen(df); i++){
			if(df[i]=='a'){
				count +=1;
			}
		}
		printf("%d��° ���� a ����: %d\n", line, count);	
	}
	fclose (fpin);
}
