#include<stdio.h>
int main(){
	int num1, num2;
	clrscr();
	printf("Enter two integers : ");
	scanf("%d %d", &num1, &num2);
	if(num1 == num2){
		printf("Result: %d = %d\n", num1, num2);
	}else if(num1 > num2){
		printf("Result : %d > %d\n", num1, num2);
	}else if(num1 < num2){
		printf("Result : %d < %d\n", num1, num2);
	}else{
		printf("No condition is matching\n");
	}
	printf("End of the program");
	getch();
	return 0;
}