#include <stdio.h>

void main(){
    int num;
    printf("���ݾ��� �Է��Ͻÿ�: ");
    scanf("%d", &num);

    if(num<1000000) 
    {
    printf("%d", (num/100)*2);
    }
    else if(num<10000000) 
    {
    printf("%d", (num/100)*3);
    }
    else if(num<50000000) 
    {
    printf("%d", (num/100)*5);
    }
    else if(num>=50000000) 
    {
    printf("%d", (num/100)*9);
    }
}