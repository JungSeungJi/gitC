#include <stdio.h>

void main(){
    char num1;

    while (1)
    {
    printf("�ҹ��� �Է�: ");
    scanf(" %c", &num1);
    if (num1=='Q'){
            break;
        }
    printf("�빮�� ���: %c\n", num1-32);
    getchar();
    }
/*
    while (1)
    {
        printf("�ҹ��� �Է�: ");
        scanf(" %c", &num1);
        if (num1=='Q'){
            break;
        }
        if (num1<'a'||num1>'z'){
            continue;
        }
        printf("�빮�� ���: %c\n", num1-32);
        
    }*/
    
}