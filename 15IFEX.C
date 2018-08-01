#include<stdio.h>
int main(){
	int num;
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num>0){
		printf("This is true block\n");
		printf("Num is : %d\n",num);
	}
	printf("End of the program");
	getch();
	return 0;
}