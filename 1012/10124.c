#include <stdio.h>

float calculate (char operator, int num1, int num2);

void main(){
    char operator;
    int num1, num2;
    float n12;
    printf("�ǿ�����1, ���������, �ǿ�����2 ������ �Է��Ͻÿ� : ");
    scanf("%d %c %d",&num1, &operator, &num2);
    n12 = calculate( operator,  num1,  num2);
    printf("%d %c %d = %.3f",num1, operator, num2, n12);
}

float calculate (char operator, int num1, int num2){
    switch (operator)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        return (float)num1 / (float)num2;
        break;
    case '%':
        return num1 % num2;
        break;
    default:
        return 0;
    }
}