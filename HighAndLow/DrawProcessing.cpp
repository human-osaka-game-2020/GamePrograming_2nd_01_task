#include "Common.h"

bool DrawProcessing(int InputValue ,int RandValue )
{
	printf("������������͂��Ă������� > ");
	scanf_s("%d", &InputValue);

	if (InputValue == RandValue)
	{
		printf("�����ł��I\n");
		return true;
	}
	else if (InputValue < RandValue)
	{
		printf("�����Ƒ傫�������ł��I\n");
	}
	else
	{
		printf("�����Ə����������ł��I\n");
	}
	return false;
}