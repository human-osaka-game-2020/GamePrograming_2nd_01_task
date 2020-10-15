
#include "Common.h"
#include "mainDefinition.h"

int main()
{
	int inputValue = 0;
	int randValue = 0;

	randValue = Random();

	printf("0～99の中から、正解の数字を当ててください\n");
	printf("\n");

	while( true )
	{
		
		if(DrawProcessing(inputValue, randValue))
		{
			break;	// breakはwhile文を抜けるのにも使える
					// breakは、一番近いfor,while,switchの{}範囲から抜ける
		}
	}

	system("pause");
	return 0;
}
