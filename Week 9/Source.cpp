#include<stdio.h>
int main()
{
	char str[80];
	int i = 0;
	int countchar = 0, countnum = 0, countother = 0;
	printf("Enter Strings : ");
	gets_s(str);
	printf("\n");
	while (str[i]!='\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z'))) countchar++;
		else if ((str[i] >= '0') && (str[i] <= '9')) countnum++;
		else countother++;
		i++;
	}
	printf(": Counting Result : \n");
	printf("Numbers = %d\n", countnum);
	printf("Characters = %d\n", countchar);
	printf("Others = %d\n", countother);
	printf("\n");
	return 0;
}