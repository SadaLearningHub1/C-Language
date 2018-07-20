#include <stdio.h>
int main(){
	int i = 1234;
	float f = 123.4567;
	clrscr();
	printf("4 digit integer right justfied to 6 digits:%6d\n",i);
	printf("4 digits integer right justified to 3 digits:%3d\n",i);
	printf("Floating point number rounded to 2 digits:%.2f\n",f);
	printf("Floating point number rounded to 0 digits:%.f\n",f);
	printf("Floating point number in exponential form(scientific notation):%e\n",123.45678);
	getch();
	return 0;
}