#include <stdio.h>

void main(){
    int num;
    printf("�� �ҵ��� �Է��Ͻÿ�: ");
    scanf("%d", &num);

    if(num<700000) 
    {
    printf("0");
    }
    else if(num<1500000) 
    {
    printf("%d", (num/100)*3);
    }
    else if(num<2500000) 
    {
    printf("%d", (num/100)*5);
    }
    else if(num>=2500000) 
    {
    printf("%d", (num/100)*7);
    }
}