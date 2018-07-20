#include<stdio.h>
int main(){
	int a=10, c;
	clrscr();
	printf("++a = %d\n", ++a);//a=a+1
	printf("a++ = %d\n", a++);//a=a+1
	printf("a value = %d\n", a);
	c=++a;
	printf("a value=%d\n", a);
	printf("c value=%d\n", c);
	c=a++;
	printf("a value=%d\n", a);
	printf("c value=%d\n", c);
	getch();
	return 0;
}