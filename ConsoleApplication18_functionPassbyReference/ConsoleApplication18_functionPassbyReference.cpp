#include<stdio.h>

void functionx(int*);

void functionx(int* ptr)
{
	*ptr = *ptr + 100;
}

int main(void)
{
	int i = 100;
	int* p;

	p = &i;
	printf("i = %d\n", i);
	functionx(p);
	printf("i = %d\n", i);

	return 0;
}
/* passing the address of i to functionx, and that address gets stored in
formal parameter which is variable ptr and when it is dereferenced i value gets calculated and
the result will be stored at the same address and therefore changing the value in main function.*/