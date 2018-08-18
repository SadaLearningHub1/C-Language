#include<stdio.h>
int main(){
	int num, i, *ptr, sum=0;
	clrscr();
	printf("Enter number of elements ");
	scanf("%d", &num);
	ptr = (int*) calloc(num, sizeof(int));
	if(ptr == NULL){
		printf("Error!...");
		exit(0);
	}
	printf("enter array elements");
	for(i=0;i<num;i++){
		scanf("%d", ptr+i);
		sum += *(ptr+i);
	}
	printf("sum=%d", sum);
	free(ptr);
	getch();
	return 0;
}