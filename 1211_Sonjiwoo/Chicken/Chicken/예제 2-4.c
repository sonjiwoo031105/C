#include <stdio.h>


int main() {
	int a;        //정수형 변수를 선언
	int b;        //정수형 변수를 선언
	a = 5;        //변수 a에 5를 대입
	b = 10;       //변수 b에 10을 대입
	a = b;        
	 //변수 a에 변수b가 들어있는  값(10)을 대입
	printf("a값은 %d입니다. \n", a);   //변수 a의 값을 출력
	return 0;
}