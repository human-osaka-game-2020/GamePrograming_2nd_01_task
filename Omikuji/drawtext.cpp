#include "Common.h"

void drawtext(int InputValue,int RandValue)
{
	printf("�����̉^����肢�܂�\n");
	printf("\n");
	printf("������������͂��Ă������� > ");
	scanf_s("%d", &InputValue);

	switch (RandValue)
	{
	case 0:
		printf("�����̉^���F��g�I\n");
		break;
	case 1:
		printf("�����̉^���F���g�I\n");
		break;
	case 2:
		printf("�����̉^���F���g�I\n");
		break;
	case 3:
		printf("�����̉^���F���g�I\n");
		break;
	case 4:
		printf("�����̉^���F���I\n");
		break;
	case 5:
		printf("�����̉^���F�勥�I\n");
		break;
	default:
		printf("�ƂĂ��Ȃ��^���ł�\n");
		break;
	}

}