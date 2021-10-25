#include<stdio.h>
void main()
{
	//variables
    int phy, che, mat, eng, tot;
	phy =60;
	che =50;
	mat =40;
	eng =70;
	
	//Calculation
	tot = phy + che + mat + eng;
	
	//Output

	printf("Marks in Physics=%d\n", phy);
	printf("Marks in Chemistry=%d\n", che);
	printf("Marks in maths=%d\n", mat);
	printf("Marks in English=%d\n", eng);
    printf("Total Marks=%d", tot);
} 
