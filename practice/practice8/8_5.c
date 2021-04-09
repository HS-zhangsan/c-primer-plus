//用二分法猜数字

#include <stdio.h>

int main(void)
{
	int upper = 100, lower = 0;
	char response;

	printf("Pick an integer from 1 to 100.I will try to guess it.\nRespond");
	printf(" with 'y' if my guess is right and with 'n' if it is wrong.\n");
	printf("Uh...is your number %d?\n", (upper + lower) / 2);

	while (getchar() != 'y')
	{
		rewind(stdin);

		printf("Is my guess is bigger or smaller?\nRespond with 'a' ");
		printf("if my guess is bigger and with 'b' if it is smaller.\n");

		response = getchar();
		rewind(stdin);

		while (response != 'a' && response != 'b')
		{
			
			printf("Please respond with 'a' or 'b':");
			response = getchar();
			rewind(stdin);
		}
		

		if (response == 'a')
		{
			upper = (upper + lower) / 2;
			printf("Uh...is your number %d?\n", (upper + lower) / 2);
		}
		else
		{
			lower = (upper + lower) / 2;
			printf("Uh...is your number %d?\n", (upper + lower) / 2);
		}
	}

	printf("That's it? No difficulty ah, my baby.\n");

	return 0;
}