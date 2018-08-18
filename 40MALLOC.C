#include<stdio.h>
int main(){
	int num, i, *ptr, sum=0;
	clrscr();
	printf("Enter number of elements");
	scanf("%d", &num);
	ptr=(int*) malloc(num * sizeof(int));//memory allocated using malloc
	if(ptr == NULL){
		printf("some issue to alllocate the memory");
		exit(0);
	}
	printf("eneter elements of array");
	for(i=0;i<num;i++){
		scanf("%d", ptr+i);
		sum += *(ptr+i);
	}
	printf("Sum = %d", sum);
	free(ptr);
	getch();
	return 0;
}