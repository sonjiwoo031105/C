#include <stdio.h>

void main(void)
{
int a = 123;  //10진수 표현
int b = 0173; //8진수 표현
int c = 0x7b; //16진수 표현
int c2 = 0b01111011; //2진수 표현

printf("a는 %d \nb는 %d \nc는 %d\nc2는 %d\n", a, b, c, c2);

float d = 1.0f, e = 1.2f, f = 1.54e3;          //실수표현
char letter = 'k';

printf("d는 %f, e는 %f, f는 %f, letter는 %c \n", d, e, f, letter);
}