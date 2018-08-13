#include<stdio.h>
int main(){
	int a[2][2][2],i, j, k;
	clrscr();
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("Enter the value of %d%d%d : ", i, j,k);
				scanf("%d", &a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("%d ",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	getch();
	return 0;
}