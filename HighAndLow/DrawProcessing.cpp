#include "Common.h"

bool DrawProcessing(int InputValue ,int RandValue )
{
	printf("何か数字を入力してください > ");
	scanf_s("%d", &InputValue);

	if (InputValue == RandValue)
	{
		printf("正解です！\n");
		return true;
	}
	else if (InputValue < RandValue)
	{
		printf("もっと大きい数字です！\n");
	}
	else
	{
		printf("もっと小さい数字です！\n");
	}
	return false;
}