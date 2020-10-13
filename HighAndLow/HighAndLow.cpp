
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

bool CompareNumber(int CorrectNum, int inputNum);

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

		if (CompareNumber(CorrectValue, inputValue))
		{
			break;
		}
	}

	system("pause");
	return 0;
}

//正解の数字と比べて違うなら大小を出力しfalseを返し、
//同じなら正解と出力しtrueを返す
bool CompareNumber(int CorrectNum, int inputNum)
{
	if(CorrectNum == inputNum)
	{
		printf("正解です！\n");
		return true;
	}
	else if(CorrectNum > inputNum)
	{
		printf("もっと大きい数字です！\n");
		return false;
	}
	else if (CorrectNum < inputNum)
	{
		printf("もっと小さい数字です！\n");
		return false;
	}
}