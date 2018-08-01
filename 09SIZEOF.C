#include <stdio.h>
int main(){
	int a, e[10];
	float f;
	double d;
	char c;
	clrscr();
	printf("size of int a=%lu bytes \n",sizeof(a));
	printf("size of float f=%lu bytes \n", sizeof(f));
	printf("size of double d=%lu bytes \n", sizeof(d));
	printf("size of char c=%lu bytes \n", sizeof(c));
	printf("size of array e=%lu bytes \n", sizeof(e));
	getch();
	return 0;
}