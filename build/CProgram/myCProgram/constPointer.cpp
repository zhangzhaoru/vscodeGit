//����ָ����ָ�볣��������
#include<stdio.h>
#include<iostream>
int main(){
    int number1 = 10;
    int number2 = 20;
    const int *pointer1 = &number1;
    //ָ������ָ�룬����ͨ��ָ��ı䳣����ֵ
    //�����޸�ָ���ָ��
    printf("pointer1 points value: %d\n",*pointer1);
    pointer1 = &number2;
    printf("pointer1 points values: %d\n",*pointer1);
    int *const pointer2 = &number1;
    *pointer2 = 99;
    printf("number1 = %d\n",number1);
    //ָ�볣���������Ըı�ָ��
    //����ͨ��ָ��ı�ָ���ֵ
    system("pause");
    return 0;
}