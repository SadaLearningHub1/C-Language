#include<stdio.h>
int main(){
	int num, i=0;
	clrscr();
	printf("Enter a positive integer\n");
	scanf("%d", &num);
	for(i=0;i<num;i++){
		if(i%2 == 0){
			printf("%d is even number\n",i);
		}
	}
	getch();
	return 0;
}
