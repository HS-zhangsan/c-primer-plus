/*
*编写一个程序，在数组中读入8个数，
*然后按倒序打印这8个数。
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	int nums[10], reverse[10];
	int count1,count2;

	printf("Enter ten numbers:");
	scanf_s("%d", &nums[0]);

	for (count1 = 1; count1 < 8; count1++)
	{
		printf("next:");
		scanf_s("%d", &nums[count1]);
	}

	printf("Ok,the number you entered is:\n");

	for (count1 = 0; count1 < 8; count1++)
	{
		printf("%d ", nums[count1]);
	}

	printf("\nThen the following is their reverse output:\n");

	for (count2 = 0,count1 -= 1; count2 <8 && count1 >= 0;
		count2++, count1--)
	{
		reverse[count2] = nums[count1];
		printf("%d ", reverse[count2]);
	}

	return 0;
}