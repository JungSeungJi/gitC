#include <stdio.h>

int main(void){
    float cm, kg, bmi;
    printf("================<BMI ����>====================\n");
    printf("- ����� Ű(cm)�� ü��(kg)�� �Է��Ͻÿ�: ");
    scanf("%f %f",&cm,&kg);
    bmi = kg / (cm * cm * 0.0001);
    printf("- ����� BMI���� %.1f�Դϴ�.\n",bmi);
    if (bmi <= 18.5) printf("- ��ü�� �����Դϴ�.\n");
    else if (bmi < 25.0) printf("- ������ ü���Դϴ�.\n");
    else if (bmi < 30.0) printf("- ��ü�� �����Դϴ�.");
    else printf("- �� �����Դϴ�.\n");

    printf("================================================");

    return 0;
}