#include "Common.h"

void drawtext(int InputValue,int RandValue)
{
	printf("今日の運勢を占います\n");
	printf("\n");
	printf("何か数字を入力してください > ");
	scanf_s("%d", &InputValue);

	switch (RandValue)
	{
	case 0:
		printf("今日の運勢：大吉！\n");
		break;
	case 1:
		printf("今日の運勢：中吉！\n");
		break;
	case 2:
		printf("今日の運勢：小吉！\n");
		break;
	case 3:
		printf("今日の運勢：末吉！\n");
		break;
	case 4:
		printf("今日の運勢：凶！\n");
		break;
	case 5:
		printf("今日の運勢：大凶！\n");
		break;
	default:
		printf("とてつもない運勢です\n");
		break;
	}

}