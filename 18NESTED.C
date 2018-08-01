#include<stdio.h>
int main(){
	int num;
	clrscr();
	printf("Enter a number : \n");
	scanf("%d", &num);
	if(num == 10){
		printf("if 10 true block");
		if(num == 5){
			printf("if 5 true bolck");
		}else{
			printf("if 5 false block");
		}
	}else{
		printf("if 10 condition else block");
		if(num == 4){
			printf("if true 4 block");
		}else{
			printf("if false 4 block");
		}
	}
	getch();
	return 0;

}