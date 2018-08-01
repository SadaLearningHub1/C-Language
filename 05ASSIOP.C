#include<stdio.h>
int main(){
	int a = 5, c;
	c = a;
	clrscr();
	printf("= operator %d\n", c);
	c += a;
	printf("+= operator %d\n",c);
	c -= a;
	printf("-= operator %d\n",c);
	c *= a;
	printf("*= operator %d\n", c);
	c /= a;
	printf("/= operator %d\n", c);
	c %= a;
	printf("%= operator %d\n", c);
	getch();
	return 0;
}