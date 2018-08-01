#include<stdio.h>
int main(){
	int i;
	double number, sum=0.0;
	clrscr();
	for(i=1; i<=10; i++){
		printf("Enter a number %d time : ",i);
		scanf("%lf",&number);
		if(number < 0.0){
			break;
		}
		sum += number;
	}
	printf("Sum = %.2lf", sum);
	getch();
	return 0;
}
