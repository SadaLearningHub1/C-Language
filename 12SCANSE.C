#include<stdio.h>
int main(){
	char str[123];
	clrscr();
	printf("Enter a string:\n");
	scanf("%[A-Z]s",&str);
	printf("you entered string is : %s \n", str);
	getch();
	return 0;
}