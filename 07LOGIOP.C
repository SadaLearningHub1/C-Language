#include<stdio.h>
int main(){
	int a = 5, b = 5, c = 10, res;
	clrscr();
	//T = 1, F = 0
	//&&-and
	//T T = T
	//T F = F
	//F T = F
	//F F = F
	//==========
	//||-or
	//T T = T
	//T F = T
	//F T = T
	//F F = F
	//==========
	//!-not
	//T = F
	//F = T
	res = (a==b) && (c>b);
	printf("&& operator : %d\n", res);
	res = (a==b) || (c<b);
	printf("|| Operator : %d\n", res);
	res = !(a==b);
	printf("! operator: %d\n", res);



	getch();
	return 0;
}