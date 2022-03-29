#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	a = b = c = 0;
	printf("\Enter lst integer :");
	scanf("%d", &a);
	printf("\Enter 2nd integer : ");
	scanf("%d", & b);
	c = adder(a, b);
	printf("\na & b in main() are : %d, % d", a, b);
	printf("\n \nc in main() is : %d", c);
}
adder (int a, int b)
{
	int c;
	c = a +b;
	a *=a;
	b += 5;
	printf("\n\na & b within adder function are: %d, %d", a, b);
	printf("\nc within adder funciton is : %d", c);
	

	return (c);
}
