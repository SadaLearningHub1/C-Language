#include<stdio.h>
int main(){
	int num, i;
	clrscr();
	printf("Enter a number : ");
	scanf("%d", &num);
	i=0;
	while(i<num){
		if(i%2 == 0){
			printf("%d is even", i);
		}
	}
	getch();
	return 0;
}