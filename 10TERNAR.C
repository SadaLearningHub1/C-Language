#include<stdio.h>
int main(){
	char Feb;
	int days;
	clrscr();
	printf("if this year is leap year, enter 1. if not enter any integer: ");
	scanf("%c", &Feb);
	days = (Feb == '1') ? 29 : 28;
	printf("Number of days in Febuary=%d", days);
	getch();
	return 0;
}