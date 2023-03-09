#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A = 0;
	int B = 0;
	printf("%s %s %s \n",A ? "A -> true": "A -> false", B ? "B -> true" : "B -> false",
	!(A && B) || A && !B || A ? "Artahaytyutyun -> true" : "Artahayturtyun -> false");

	A = 0;
	B = 1;
	printf("%s %s %s \n",A ? "A -> true": "A -> false", B ? "B -> true" : "B -> false",
	!(A && B) || A && !B || A ? "Artahaytyutyun -> true" : "Artahayturtyun -> false" );


	A = 1;
	B = 0;
	printf("%s %s %s \n",A ? "A -> true": "A -> false", B ? "B -> true" : "B -> false",
	!(A && B) || A && !B || A ? "Artahaytyutyun -> true" : "Artahayturtyun -> false" );

	A = 1;
	B = 1;
	printf("%s %s %s \n",A ? "A -> true": "A -> false", B ? "B -> true" : "B -> false",
	!(A && B) || A && !B || A ? "Artahaytyutyun -> true" : "Artahayturtyun -> false" );


}
