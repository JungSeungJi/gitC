#include <stdio.h>

void main(){
    char oper;
    int one, two;
    int result;

    while(1){
        printf("������ �Է� : ");
        scanf("%c", &oper);
        if (oper == 'q') break;
        printf("ù ��° �� �Է� : ");
        scanf("%d", &one);
        printf("�� ��° �� �Է� : ");
        scanf("%d", &two);

        switch (oper)
        {
        case '+':
            result = one+two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        case '-':
            result = one-two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        case '*':
            result = one*two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        case '/':
            result = one/two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        case '%':
            result = one%two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        
        default:
            printf("Error");
            break;
        }
        getchar();
    }
    printf("\nEND");
}

/*
if (oper=='+') {
        result = one+two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
    else if (oper=='-') {
        result = one-two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
    else if (oper=='*') {
        result = one*two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
    else if (oper=='/') {
        result = one/two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
    else if (oper=='%') {
        result = one%two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
*/
