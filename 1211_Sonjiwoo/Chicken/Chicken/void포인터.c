#include <stdio.h>

void main(void)
{
	char arr[4] = { 1, 1, 2, 2 };
	char* cptr = arr;
	short* sptr = arr;
	void* vptr = arr;

	printf("%p %p %p %p \n", arr, cptr, sptr, vptr);
	printf("%d %d %d %d \n", *arr, *cptr, *sptr);
	//printf("%d \n", *vptr); //에러발생
	printf("%d %d %d \n", arr[0], cptr[0], sptr[0]);

	printf("%p %p %p \n", arr + 1, cptr + 1, sptr + 1);
	printf("%d %d %d \n", *(arr + 1), *(cptr + 1), *(sptr + 1));
	printf("%d %d %d \n", arr[1], cptr[1], sptr[1]);
}