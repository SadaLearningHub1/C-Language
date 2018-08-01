#include<stdio.h>
int main(){
	char oper;
	double firnum, secnum;
	clrscr();
	printf("Enter an operator(+,-,*,/) : ");
	scanf("%c", &oper);
	printf("Enter two operands : ");
	scanf("%lf %lf", &firnum, &secnum);
	switch(oper){
		case '+':
			printf("%.1lf + %.1lf=%.1lf", firnum,secnum,firnum+secnum);
			break;
		case '-':
			printf("%.1lf - %.1lf=%.1lf", firnum,secnum,firnum-secnum);
			break;
		case '*':
			printf("%.1lf * %.1lf=%.1lf", firnum,secnum,firnum*secnum);
			break;
		case '/':
			printf("%.1lf / %.1lf=%.1lf", firnum,secnum,firnum/secnum);
			break;
		default:
			printf("Error! operator is not correct");
	}
	getch();
	return 0;
}