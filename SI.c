// SI & CI using c

// calculating simple intrest and compound intrest 
#include <stdio.h>
#include<math.h>
int main()
{
	float P,T,R,SI,CI;
	printf("Enter the Principle:");
	scanf("%f",&P);
	printf("Enter the time:");
	scanf("%f",&T);
	printf("Enter the Rate:");
	scanf("%f",&R);
	SI = (P*T*R)/100;
	CI = P*pow((1+R/100),T)-P;
	printf("SI=%f",SI);
	printf("\nCI=%f",CI);

	return 0;
}


