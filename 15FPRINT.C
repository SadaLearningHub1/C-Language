#include<stdio.h>
int main(){
	int i, n=2;
	char str[50];
	FILE *fpfr = fopen("sample.txt","w");
	clrscr();
	if(fpfr == NULL){
		printf("could not open the file");
		return 0;
	}
	for(i=0; i<n;i++){
		printf("enter a name:");
		scanf("%s",&str);
		fprintf(fpfr,"%d,%s\n", i, str);
	}
	fclose(fpfr);
	getch();
	return 0;
}