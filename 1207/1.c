#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student{
	char name[20];
	int age;
	char country[5];
	char department[3];
}STUDENT;

void main(){
    FILE *fpin;
	fpin = fopen("data.txt", "r");
	STUDENT s1[20];

    int i=0;
	while(!feof (fpin)){
		fscanf(fpin, "%s %d %s %s" , s1[i].name, &s1[i].age, s1[i].country, s1[i].department);
		i++;
	}

    int num, num2;
	char num1[20];
	char num3[20];
	char num4[20];

    printf("1. NAME\n");
	printf("2. AGE\n");
	printf("3. COUNTRY\n");
	printf("4. DEPARTMENT\n");
	printf("5. QUIT\n");

	printf("Please Enter Menu Number:");
	scanf("%d", &num);

    if(num==1){
		printf("Enter the student name: ");
		scanf("%s", &num1);
		for(i=0; i<20; i++){
            if(strcmp(num1, s1[i].name)==0){
                printf("%s %d %s %s\n", s1[i].name, s1[i].age, s1[i].country, s1[i].department);
            }
        }
    }

    if(num==2){
		printf("Enter the student age: ");
		scanf("%d", &num2);
		for(i=0; i<20; i++){
            if(num2== s1[i].age){
                printf("%s %d %s %s\n", s1[i].name, s1[i].age, s1[i].country, s1[i].department);
            }
        }
    }

    if(num==3){
		printf("Enter the student country: ");
		scanf("%s", &num3);
		for(i=0; i<20; i++){
			if(strcmp(num3, s1[i].country)==0){
				printf("%s %d %s %s\n", s1[i].name, s1[i].age, s1[i].country, s1[i].department);
			}
		}
	}

    if(num==4){
		printf("Enter the student department: ");
		scanf("%s", &num4);
		for(i=0; i<20; i++){
			if(strcmp(num4, s1[i].department)==0){
				printf("%s %d %s %s\n", s1[i].name, s1[i].age, s1[i].country, s1[i].department);
			}
		}
	}
	
	if(num==5){
		printf("���α׷��� ����˴ϴ�.\n");
		exit(0);
	}
}
