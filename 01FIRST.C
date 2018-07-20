#include<stdio.h>
int main()
{
int id;
float f;
char chr;
int chr1=69;
clrscr();
printf("Enter Character : \n");
scanf("%c",&chr);
printf("Character is : %c\n",chr);
printf("ASCII values of %c is %d\n", chr,chr);
printf("Character having ASCII value 69 is %c:\n",chr1);
printf("Enter An integer\n");
scanf("%d",&id);
printf("Number is  : %d \n", id);
printf("Enter Float Number : \n");
scanf("%f",&f);
printf("Float Number is : %f\n",f);
getch();
return 0;
}