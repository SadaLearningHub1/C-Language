#include<stdio.h>
int main(){
	int num, count, sum = 0;
	clrscr();
	printf("Enter the positive integer : ");
	scanf("%d", &num);
	for(count = 1; count<=num; count++){
		sum += count;
	}
	printf("sum = %d", sum);
	getch();
	return 0;
}