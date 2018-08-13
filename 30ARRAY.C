#include<stdio.h>
int main(){
	int marks[10], i, n, sum=0, avg;
	clrscr();
	printf(" Enter n:\n");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Enter number %d: ",i+1);
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	printf("Sum=%d", sum);
	avg=sum/n;
	printf("avarage=%d", avg);
	getch();
	return 0;
}
