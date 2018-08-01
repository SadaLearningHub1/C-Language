#include<stdio.h>
int main(){
	int a = 5, b = 10, c = 5;
	clrscr();
	printf("%d == %d = %d\n", a, b, a == b);
	printf("%d == %d = %d\n", a, c, a == c);
	printf("%d > %d = %d\n", a, b, a>b);
	printf("%d < %d = %d\n", a, b, a<b);
	printf("%d != %d = %d\n", a, b, a != b);
	printf("%d != %d = %d\n", a, c, a != c);
	printf("%d >= %d = %d\n", a, b, a>=b);
	printf("%d <= %d = %d\n", a, b, a<=b);
	printf("%d >= %d = %d\n", a, c, a>=c);
	printf("%d <= %d = %d\n", a, c, a<=c);
	getch();
	return 0;
}