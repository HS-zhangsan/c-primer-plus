#include <stdio.h>
void Temperatures(double);

int main(void)
{
	double Fahrenheit;

	printf("Please enter a Fahrenheit temperature:");

	while (scanf_s("%lf", &Fahrenheit) == 1)
	{
		Temperatures(Fahrenheit);
		printf("Please enter next Fahrenheit temperature(q to quit):");
	}

	puts("Done!");
	return 0;
}

void Temperatures(double tem)
{
	double Celsius, Kelvin;
	const double F_to_C = 5.0 / 9.0;
	const double C_to_K = 273.16;

	Celsius = F_to_C * (tem - 32.0);
	Kelvin = Celsius + C_to_K;

	printf("Fahrenheit: %-10.2lf\n"
		   "Celsius:    %-10.2lf\n"
		   "Kelvin:     %-10.2lf\n",
		tem, Celsius, Kelvin);
}