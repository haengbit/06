#include <stdio.h>
#include <stdlib.h>

int combination(int num1, int num2, int num3)
{
	int combi_res;
	combi_res = factorial(num1) / (factorial(num2) * factorial(num3));
	printf("the combination result is : %d", combi_res);
	return(0);
	
}

int factorial(int n)
{
	int res = 1;
	int i;
	for (i = 1; i <= n; i++)
		res = res * i;
	return res;
}

int get_integer()
{
	int num;
	printf("input a number : ");
	scanf("%d", &num);
	return(num);
}


int main(int argc, char *argv[]) {
	
	int first_ingred, second_ingred, third_ingred;
	
	first_ingred = get_integer();
	second_ingred = get_integer();
	third_ingred = first_ingred - second_ingred;
	
	combination(first_ingred, second_ingred, third_ingred);
}








