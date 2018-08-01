#include<stdio.h>
int main(){
	int num, i;
	clrscr();
	printf("Enter a number : ");
	scanf("%d", &num);
	i=0;
	do{
		if(i%2 == 0){
			printf("%d is even", i);
		}
	}while(i<num);
	getch();
	return 0;
}