#include <stdio.h>

void main(void)
{
int a = 123;  //10���� ǥ��
int b = 0173; //8���� ǥ��
int c = 0x7b; //16���� ǥ��
int c2 = 0b01111011; //2���� ǥ��

printf("a�� %d \nb�� %d \nc�� %d\nc2�� %d\n", a, b, c, c2);

float d = 1.0f, e = 1.2f, f = 1.54e3;          //�Ǽ�ǥ��
char letter = 'k';

printf("d�� %f, e�� %f, f�� %f, letter�� %c \n", d, e, f, letter);
}