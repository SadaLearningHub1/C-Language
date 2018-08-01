#include<stdio.h>
int main(){
	char buffer[50];
	int a=10, b=20, c;
	clrscr();
	c=a+b;
	sprintf(buffer, "sum of %d and %d is %d", a,b,c);
	printf("%s", buffer);
	getch();
	return 0;
}