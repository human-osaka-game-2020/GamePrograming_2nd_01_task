#include "Common.h"

void drawtext(int InputValue,int RandValue)
{
	printf("¡“ú‚Ì‰^¨‚ğè‚¢‚Ü‚·\n");
	printf("\n");
	printf("‰½‚©”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ");
	scanf_s("%d", &InputValue);

	switch (RandValue)
	{
	case 0:
		printf("¡“ú‚Ì‰^¨F‘å‹gI\n");
		break;
	case 1:
		printf("¡“ú‚Ì‰^¨F’†‹gI\n");
		break;
	case 2:
		printf("¡“ú‚Ì‰^¨F¬‹gI\n");
		break;
	case 3:
		printf("¡“ú‚Ì‰^¨F––‹gI\n");
		break;
	case 4:
		printf("¡“ú‚Ì‰^¨F‹¥I\n");
		break;
	case 5:
		printf("¡“ú‚Ì‰^¨F‘å‹¥I\n");
		break;
	default:
		printf("‚Æ‚Ä‚Â‚à‚È‚¢‰^¨‚Å‚·\n");
		break;
	}

}