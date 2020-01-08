//常量指针与指针常量的区别
#include<stdio.h>
#include<iostream>
int main(){
    int number1 = 10;
    int number2 = 20;
    const int *pointer1 = &number1;
    //指向常量的指针，不可通过指针改变常量的值
    //可以修改指针的指向
    printf("pointer1 points value: %d\n",*pointer1);
    pointer1 = &number2;
    printf("pointer1 points values: %d\n",*pointer1);
    int *const pointer2 = &number1;
    *pointer2 = 99;
    printf("number1 = %d\n",number1);
    //指针常量，不可以改变指向
    //可以通过指针改变指向的值
    system("pause");
    return 0;
}