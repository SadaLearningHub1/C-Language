#include<stdio.h>
int main(){
	int a=100;
	int* aAddress;
	clrscr();
	printf("a value= %d\n", a);
	printf("a address=%u\n", a);
	aAddress = &a;
	printf("Address of the pointer= %u\n", aAddress);
	printf("Address contains value=% d\n", *aAddress);
	a=120;
	printf("Address of the pointer= %u\n", aAddress);
	printf("Address contains value=% d\n", *aAddress);
	*aAddress=130;
	printf("Address of the pointer= %u\n", aAddress);
	printf("Address contains value=% d\n", *aAddress);
	getch();
	return 0;
}