#include<stdio.h>
int main(){
	double num, sum=0;
	clrscr();
	do{
		printf("Enter a number : ");
		scanf("%lf", &num);
		sum += num;
	}while(num != 0.0);
	printf("Sum = %.2lf", sum);
	getch();
	return 0;
}