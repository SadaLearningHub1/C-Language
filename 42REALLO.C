#include<stdio.h>
int main(){
	int *ptr, i, n1, n2;
	clrscr();
	printf("Enter he size of an array\n");
	scanf("%d", &n1);
	ptr = (int*) malloc(n1*sizeof(int));
	printf("Address of previously allocated memory\n");
	for(i=0;i<n1;i++){
		printf("%u\t", ptr+i);
	}
	printf("\n Enter the new size of an array");
	scanf("%d", &n2);
	ptr = realloc(ptr, n2);
	for(i=0;i<n2;i++){
		printf("%u\t", ptr+i);
	}
	getch();
	return 0;
}