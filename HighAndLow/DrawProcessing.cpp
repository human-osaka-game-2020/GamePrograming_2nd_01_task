#include "Common.h"

bool DrawProcessing(int InputValue ,int RandValue )
{
	printf("‰½‚©”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
	scanf_s("%d", &InputValue);

	if (InputValue == RandValue)
	{
		printf("³‰ğ‚Å‚·I\n");
		return true;
	}
	else if (InputValue < RandValue)
	{
		printf("‚à‚Á‚Æ‘å‚«‚¢”š‚Å‚·I\n");
	}
	else
	{
		printf("‚à‚Á‚Æ¬‚³‚¢”š‚Å‚·I\n");
	}
	return false;
}