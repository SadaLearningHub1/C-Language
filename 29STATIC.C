#include<stdio.h>
static int count=5; //global variable
void fun(void);
void fun(void){
	static int i=5; //local static variable
	i++;
	printf("i is %d and count is %d\n", i, count);
}
int main(){
	clrscr();
	while(count--){
		fun();
	}
	getch();
	return 0;
}