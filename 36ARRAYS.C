#include<stdio.h>
int main(){
	int i, num[6], sum=0;
	clrscr();
	printf("Enter the six numbers:\n");
	for(i=0;i<6;i++){
		//(num + i)is equivalent to &num[i]
		scanf("%d", (num + i));
		//*(num + i) is equivalent to num[i]
		sum += *(num + i);
	}
	printf("sum = %d", sum);
	getch();
	return 0;
}