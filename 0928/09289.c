#include <stdio.h>

void main(void){
    char oper;
    int a, b, result;
    int operError = 0;

    printf("��������ڿ� �ΰ��� �ǿ����ڸ� �Է��Ͻÿ�: ");
    scanf("%c %d %d",&oper,&a,&b);

    if (oper == '+') result = a + b;
    else if (oper == '-') result = a - b;
    else if (oper == '*') result = a * b;
    else if (oper == '/'){
        if (b != 0){
            result = a / b;
        }
        else operError = 2;
    }
    else if (oper == '%'){
        if (b != 0){
            result = a % b;
        }
        else operError = 2;
    }
    else operError = 1;

    if (operError == 0){
        printf("%d %c %d = %d",a,oper,b,result);
    }
    else if (operError == 1){
        printf("�߸� �Է��� �������Դϴ�.");
    }
    
}