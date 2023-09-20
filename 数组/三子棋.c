#define _CRT_SECURE_NO_WARNING 1

#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("****  1.开始游戏  ****\n");
	printf("****  0.退出游戏  ****\n");
	printf("**********************\n");
}

void game()
{
	char board[ROW][COL];

	InitBoard(board,ROW,COL);//初始化，打印未下棋处为空白

	DisplayBoard(board,ROW,COL);//打印棋盘
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}









