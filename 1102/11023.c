#include <stdio.h>
 
int main(){
    int student[2][5];
    int i, j;
    int engsum=0, mathsum=0;
    double engavg=0, mathavg=0;
    
    for(i=0; i<2; i++){
    	if(i==0){
	    	printf("English score\n");
			for(j=1; j<6; j++){
				printf("�л� %d ���� �Է�(5���ʰ�X): ", j);
				scanf("%d", &student[i][j]);
				engsum += student[i][j];
			}
			printf("*************************************\n\n");
		}
		if(i==1){
			printf("Math score\n");
			for(j=1; j<6; j++){
				printf("�л� %d ���� �Է�(5���ʰ�X): ", j);
				scanf("%d", &student[i][j]);
				mathsum += student[i][j];
			}
			printf("*************************************\n\n");
		}
	}
	engavg = engsum / 5.0;
	mathavg = mathsum / 5.0;
	printf("����� ������Դϴ�\n\n");
	printf("engavg: %.1f\n", engavg);
	printf("mathavg: %.1f\n\n", mathavg);

	printf("���� ���� ��� ���� : %d\n", engsum / 5);
	
	printf("���� ���� ��� ���� : %d\n", mathsum / 5);
	
	 
	
	printf("�л��� �����������\n");
	
	printf("�л�1�� ������� : %.1f\n", (float)(student[0][0]+student[1][0])/2);
	
	printf("�л�2�� ������� : %.1f\n", (float)(student[0][1]+student[1][1])/2);
	
	printf("�л�3�� ������� : %.1f\n", (float)(student[0][2]+student[1][2])/2);
	
	printf("�л�4�� ������� : %.1f\n", (float)(student[0][3]+student[1][3])/2);
	
	printf("�л�5�� ������� : %.1f\n", (float)(student[0][4]+student[1][4])/2);
}
