#include <stdio.h>

void main(){
    char oper;
    int a, b, result;

    printf("�����ڿ� �� ���� �ǿ����ڸ� �Է��Ͻÿ�");
    scanf("%c %d %d", &oper, &a, &b);
    
    switch (oper)
    {
    case '+':
        result = a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
    case '/':
        result = a/b;
        break;
    case '%':
        result = a%b;
        break;
    
    default:
        break;
    }
}