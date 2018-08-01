#include<stdio.h>
int main(){
	int num;
	long long factorial;
	clrscr();
	printf("Enter an integer : ");
	scanf("%d", &num);
	factorial = 1;
	while(num > 0){
	  factorial *= num;
	  --num;
	}
	printf("factorial =%lld", factorial);
	getch();
	return 0;
}