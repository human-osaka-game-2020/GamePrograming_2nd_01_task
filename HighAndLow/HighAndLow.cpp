
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

bool CheckValue(int inputValue, int answerValue);

int main()
{
	int inputValue = 0;
	int randValue = 0;

	srand((unsigned)time(NULL));
	randValue = rand() % 100;

	printf("0～99の中から、正解の数字を当ててください\n\n");

	while( true )
	{
		printf("何か数字を入力してください > ");
		scanf_s("%d", &inputValue);

		if (CheckValue(inputValue, randValue) == true) {
			break;
		}
	}

	system("pause");
	return 0;
}

bool CheckValue(int inputValue, int answerValue) {

	if (inputValue == answerValue)
	{
		printf("正解です！\n");
		return true;
	}
	else if (inputValue < answerValue)
	{
		printf("もっと大きい数字です！\n");
	}
	else
	{
		printf("もっと小さい数字です！\n");
	}
}