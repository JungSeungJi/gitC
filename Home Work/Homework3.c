/*
2021�� 12�� 03��
�������б� ��ǻ�Ͱ��к� 2021243053 ���¹�
����ä�� ���α׷�
*/
#include <stdio.h>
#include <string.h>

void main(){
	char name[17][10]; 		// �̸��� ������ char�� ����  �迭 ���� 
	char sm[17][20];		// �а��� ������ char�� ���� �迭 ���� 
	int num1[17];			// �й��� ������ int�� �迭 ����  
	int num2[17];			// �й��� ������ int�� �迭 ����
	int ans[17][10]={0};	// ������ ������ int�� ����  �迭 ���� �� �ʱ�ȭ 
	int score[17]={0};		// ���� 
	
	int ANSWER[17];			// answer�� ���� �����ϴ� int�� �迭 ANSWER ���� 
	int i, j;				// �ݺ����� ����ϱ� ���� int�� ���� i, j ���� 
	
	// �л� ���� �� ������ ������ �б� ���� �ڵ� 
	FILE *fpin;
	fpin = fopen ("source.txt", "r");	// read ���·�  source.txt ���� ����
	
	for(i=0;i<17;++i){		// source.txt ������ ���� �迭�� �����ϱ� ���� �ݺ��� 
		fscanf(fpin, "%s %s %d-%d", &name[i], &sm[i], &num1[i], &num2[i]);
		for(j=0;j<10;++j){
			fscanf(fpin, "%d", &ans[i][j]);
		}
	}
	fclose(fpin);  
	
	// ���� �񱳿� ä���� ����  answer.txt ���� �ҷ����� ���� �ڵ� 
	FILE *fpout;
	fpout=fopen("answer.txt", "r");  // read ���·�  answer.txt ���� ����
	
	for(i=0;i<10;++i){
		fscanf(fpout, "%d", &ANSWER[i]);		// ������  ANSWER �迭�� ���� 
	}
	fclose(fpout);
	
	for(i=0;i<17;++i) {							// ���� ��Ȱ� ������ ���Ͽ� ���� ������ +10���� �ϱ� ���� �ݺ��� 
		for(j=0;j<10;++j){
			if(ans[i][j] == ANSWER[j]){
				score[i]+=10;
			}
		}
	}
	
    // score �迭�� �������� ��ȯ ��Ģ�� �̿��Ͽ� �����ϱ� ���� �ڵ� 
	int temp;			// ���Ƿ� ����� int�� ���� temp ���� 
    char temp2[20];		// ���Ƿ� ����� char�� �迭  temp2 ���� 
    int k;				// �ݺ����� ����ϱ� ���� int�� ���� k ���� 
    
	for(i=0;i<16;++i){
		for(j=i+1;j<17;++j){
			if(score[i]<score[j]){
				// �̸� ���� 
				strcpy(temp2, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp2);
				// �а� ����
				strcpy(temp2, sm[i]);
				strcpy(sm[i], sm[j]);
				strcpy(sm[j], temp2);
				// �й� ����
                temp = num1[i];
                num1[i] = num1[j];
                num1[j] = temp;
                // �й� ����
                temp = num2[i];
                num2[i] = num2[j];
                num2[j] = temp;
                // ���� ���� 
                for(k=0; k<10; k++){
                    temp = ans[i][k];
                    ans[i][k] = ans[j][k];
                    ans[j][k] = temp;
                }
                // ���� ���� 
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
			}
		}
	}
	
	int rank=1;	// ��� ���� 
	int a; 		// score ����
	// rank �������� ���	 
	printf("\t\t\t\t[ ä �� �� �� ]\n");																	 
	printf("====================================================================================\n");		 
	printf("\t�а�\t\t  ����\t\t  �й�\t\t  ����\t       ���\n");											 
	printf("====================================================================================\n");		 
	for(i=0;i<17;++i)																						 
	{																									 
		printf("     %s", sm[i]);		 																			 
		if(strlen(sm[i])>10){																							
			printf("   \t%s", name[i]);																	 
		}
																									 
		else{																									 
			printf("          \t%s", name[i]);															 
		}
																											 
		printf("     \t%04d-%04d", num1[i], num2[i]);														 
		printf("          %d", score[i]);																	 
		
		// rank �ĺ����� ��� 
		// i=0�� �����ϰ� a�� score�� �� �� �ٸ� ��� +1 �Ͽ� rank ���, ���� ��� ���� ����� ��� 
		if(i==0){															 
			printf("\t\t%d\n", rank);								 
		}
																	 
		else if(a==score[i]){															 
			printf("\t\t%d\n", rank);								    
		}
																	 		
		else{															 
			++rank;												 
			printf("\t\t%d\n", rank);								 
		}	
																 
		a=score[i];											 
	}
	
    int count[4];	// �л� ���� �����ϱ� ���� int�� �迭 count ���� 
    int avg[4];		// ����� ���ϱ� ���� int�� �迭 avg ���� 
	
    printf("\n");																	 
	printf("====================================================================================\n");		 
	printf("\t�а�\t\t  �л� ��\t\t ���\n");											 
	printf("====================================================================================\n");		 
	for(i=0;i<17;++i)									// �л� ���� ����� ���ϱ� ���� �ݺ���													 
	{
        if(strcmp(sm[i], "Computer")==0){
            count[0]+=1;
            avg[0]+=score[i];
        }
		else if(strcmp(sm[i], "Electricity")==0){
            count[1]+=1;
            avg[1]+=score[i];
        }
        else if(strcmp(sm[i], "Business")==0){
            count[2]+=1;
            avg[2]+=score[i];
        }
        else if(strcmp(sm[i], "Art")==0){
            count[3]+=1;
            avg[3]+=score[i];
        }
    }
    
	printf("      Computer\t\t    %d\t\t\t  %.1f\n", count[0], (float)avg[0]/(float)count[0]);
	printf("      Electricity\t    %d\t\t\t  %.1f\n", count[1], (float)avg[1]/(float)count[1]);
	printf("      Business\t\t    %d\t\t\t  %.1f\n", count[2], (float)avg[2]/(float)count[2]);
	printf("      Art\t\t    %d\t\t\t  %.1f\n", count[3], (float)avg[3]/(float)count[3]);
	
	// ä�����ǥ��  result.txt ���Ͽ� ����ϱ� ���� �ڵ� 
	FILE *fp;
	fp=fopen("result.txt", "w"); // write ���·�  result.txt ���� ���� 
	
	rank=0;						// result.txt�� ����ϱ� ���� rank ������ 0���� �ʱ�ȭ 
	// rank �������� ���
    fprintf(fp, "\t\t\t\t[ ä �� �� �� ]\n");																	 
	fprintf(fp, "====================================================================================\n");		 
	fprintf(fp, "\t�а�\t\t  ����\t\t  �й�\t\t  ����\t       ���\n");											 
	fprintf(fp, "====================================================================================\n");		 
	for(i=0;i<17;++i)																						 
	{																										 
		fprintf(fp, "     %s", sm[i]);																		 
		if(strlen(sm[i])>10){																							 
			fprintf(fp, "   \t\t%s", name[i]);																	 
		}
		
		else if(strlen(sm[i])<4){
			fprintf(fp, "                 \t\t%s", name[i]);
		}
																										 
		else{																									 
			fprintf(fp, "                 \t%s", name[i]);															 
		}
																											 
		fprintf(fp, "     \t%04d-%04d", num1[i], num2[i]);
		fprintf(fp, "               %d", score[i]);
		
		// rank �ĺ����� ���
		// i=0�� �����ϰ� a�� score�� �� �� �ٸ� ��� +1 �Ͽ� rank ���, ���� ��� ���� ����� ��� 
		if(i==0){
			fprintf(fp, "\t         %d\n", rank);
		}
		
		else if(a==score[i]){
			fprintf(fp, "\t         %d\n", rank);
		}
		
		else{
			++rank;
			fprintf(fp, "\t         %d\n", rank);
		}
		
		a=score[i];
	}
																		 
	fprintf(fp, "====================================================================================\n");		 
	fprintf(fp, "\t�а�\t\t  �л� ��\t\t ���\n");											 
	fprintf(fp, "====================================================================================\n");		 
	for(i=0;i<17;++i)																						 
	{
        if(strcmp(sm[i], "Computer")==0){
            count[0]+=1;
            avg[0]+=score[i];
        }
		else if(strcmp(sm[i], "Electricity")==0){
            count[1]+=1;
            avg[1]+=score[i];
        }
        else if(strcmp(sm[i], "Business")==0){
            count[2]+=1;
            avg[2]+=score[i];
        }
        else if(strcmp(sm[i], "Art")==0){
            count[3]+=1;
            avg[3]+=score[i];
        }
    }
    
	fprintf(fp, "      Computer\t\t    %d\t\t  %.1f\n", count[0], (float)avg[0]/(float)count[0]);
	fprintf(fp, "      Electricity\t\t    %d\t\t  %.1f\n", count[1], (float)avg[1]/(float)count[1]);
	fprintf(fp, "      Business\t\t    %d\t\t  %.1f\n", count[2], (float)avg[2]/(float)count[2]);
	fprintf(fp, "      Art\t\t\t    %d\t\t  %.1f\n", count[3], (float)avg[3]/(float)count[3]);
	
    fclose(fp); 

}
