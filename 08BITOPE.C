#include<stdio.h>
int main(){
	int a = 12, b=25;
	clrscr();
	printf("a&b : %d\n", a&b);
	printf("a|b : %d\n", a|b);
	printf("a^b : %d\n", a^b);
	printf("~a : %d\n", ~a);
	printf("a>>2 : %d\n", a>>2);
	printf("a<<2 : %d\n", a<<2);
	getch();
	return 0;
}