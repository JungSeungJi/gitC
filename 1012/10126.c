#include <stdio.h>

float nemo(float nemo);
float one(float one);
float semo(float semo, float semo1);

void main(){
    char a;
    float s ,s1;

    while (1){
        printf("Rectangle, Circle, Triangle�� ù ���ڸ� �Է�: ");
        scanf("%c" , &a);

        if (a=='q'||'Q'){
            printf("���α׷� ����");
            break;
        }

        else{
            switch(a){
                case 'R':
                    printf("���簢���� �Ѻ��� ����: ");
                    scanf("%f" , &s);
                    printf("%.1f\n" , nemo(s));
                    break;
                case 'C':
                    printf("���� ������ ����: ");
                    scanf("%f" , &s);
                    printf("%.1f\n" , one(s));
                    break;
                case 'T':
                    printf("�ﰢ���� �غ�: ");
                    scanf("%f" , &s);
                    printf("�ﰢ���� ����: ");
                    scanf("%f" , &s1);
                    printf("%.1f\n" , semo(s , s1));
                    break;
                default:
                    printf("������ ǥ�Ⱑ �߸��Ǿ����ϴ�.");
                    break;
                }   
            getchar();
        } 
    }
   
   
}


float nemo(float nemo){
   return nemo*nemo;
}

float one(float one){
   return one*one*3.14;
}

float semo(float semo, float semo1){
   return semo * semo1 * 0.5;
}






