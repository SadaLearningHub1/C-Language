#include<stdio.h>
int main(){
	char cary[4];
	int i;
	clrscr();
	for(i=0;i<4;i++){
		printf("Address of the chararry[%d] = %u\n", i, &cary[i]);
	}
	getch();
	return 0;
}