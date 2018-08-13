#include<stdio.h>
int main(){
	int a[10], i, total;
	clrscr();
	for(i=0;i<10;i++){
		printf("Enter a value");
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++){
		printf("Value from array index %d is :%d\n ", i, a[i]);
		total += a[i];
	}
	printf("Tptal of array of three num : %d",+total);
	getch();
	return 0;
}