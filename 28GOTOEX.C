#include<stdio.h>
int main(){
	const int maxInput=5;
	int i;
	double num, avg, sum=0.0;
	clrscr();
	for(i=1; i<=maxInput;i++){
		printf("%d. Enter a number\n", i);
		scanf("%d", &num);
		if(num < 0.0)
			goto jump;
		sum += num;
	}
	printf("Next to for loop");

	jump:

	avg = sum/(i-1);
	printf("sum=%.2f\n", sum);
	printf("avg=%.2f\n", avg);

	getch();
	return 0;
}