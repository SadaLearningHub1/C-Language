#include<stdio.h>
void display(int b[5]);

int main(){
	int a[5],i;
	clrscr();
	for(i=0;i<=5;i++){
		printf("Enter value for %d index\n", i);
		scanf("%d", &a[i]);
	}
	display(a);
	getch();
	return 0;
}
void display(int b[5]){
	int i;
	for(i=0;i<5;i++){
		printf("%d", b[i]);
	}
}