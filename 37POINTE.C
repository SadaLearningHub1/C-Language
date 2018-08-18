#include<stdio.h>
void swap(int *i, int *j);
int main(){
	int num1 = 5, num2 = 2;
	clrscr();
	printf("Before swap num1=%d and num2=%d\n", num1, num2);
	swap(&num1, &num2);
	printf("after swap\n");
	printf("Number1 =%d\n", num1);
	printf("Number2 = %d\n", num2);
	getch();
	return 0 ;
}
void swap(int *i, int *j){
	int temp;
	temp=*i;
	*i=*j;
	*j=temp;
}

