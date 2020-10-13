
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

bool CompareValue(int inputValue, int CorrectValue);

int main()
{
	int inputValue = 0;
	int CorrectValue = 0;

	srand((unsigned)time(NULL));
	CorrectValue = rand() % 100;

	printf("0～99の中から、正解の数字を当ててください\n");
	printf("\n");

	while( true )
	{
		printf("何か数字を入力してください > ");
		scanf_s("%d", &inputValue);

		if (CompareValue(inputValue, CorrectValue) == true)
		{
			break;
		}
	}

	system("pause");
	return 0;
}

bool CompareValue(int inputValue, int CorrectValue)
{
	if (inputValue == CorrectValue)
	{
		printf("正解です！\n");
		return true;	
	}
	else if (inputValue < CorrectValue)
	{
		printf("もっと大きい数字です！\n");
	}
	else
	{
		printf("もっと小さい数字です！\n");
	}
}
