#include <stdio.h>
#include <stdlib.h>

int main()
{
	char A = 0;
	char B = 0;
	printf("%s %s %s\n", A ? "A -> true" : "A --> false", B ? "B --> true" : "B -> flase",
	A && B || !B || A ? "Artahaytutyun -> true" : "Artahaytutyun -> false");

	A = 0;
	B = 1;
	printf("%s %s %s\n",A ? "A -> true": "A -> false", B ? "B -> true" : "B -> false",
	A && B || !B || A ? "Artahaytyutyun -> true" : "Artahayturtyun -> false" );

	A = 1;
	B = 0;
	printf("%s %s %s\n",A ? "A -> true": "A -> false", B ? "B -> true" : "B -> false",
	A && B || !B || A ? "Artahaytyutyun -> true" : "Artahayturtyun -> false" );

	A = 1;
	B = 1;
	printf("%s %s %s\n",A ? "A -> true": "A -> false", B ? "B -> true" : "B -> false",
	A && B || !B || A ? "Artahaytyutyun -> true" : "Artahayturtyun -> false" );





}
