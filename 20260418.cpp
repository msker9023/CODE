#include<stdio.h>
#include<easyx.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SNAKE 500
ExMessage msg;
bool running = true;
struct Pos
{
	int x;
	int y;
};
struct FoodPos
{
	int x;
	int y;
	int flag;
}foodpos;
//蛇的结构体
struct snake
{
	int num;
	int dir;
	int score;
	int size;
	int speed;
	//记录坐标
	struct Pos coor[MAX_SNAKE];
}snake;
void InitSnake()
{
	snake.num = 3;
	snake.score = 0;
	snake.size = 20;
	snake.speed = 200;
	snake.dir = VK_RIGHT;
	//蛇初始化
	snake.coor[0].x = 20;
	snake.coor[0].y = 0;
	snake.coor[1].x = 10;
	snake.coor[1].y = 0;
	snake.coor[2].x = 0;
	snake.coor[2].y = 0;
}
void DrawSnake()
{
	setfillcolor(RED);
	for (int i = 0; i < snake.num; i++)
	{
		fillrectangle(snake.coor[i].x, snake.coor[i].y, snake.coor[i].x + snake.size, snake.coor[i].y + snake.size);
	}
}
void SnakeDirection()
{
	peekmessage(&msg, EX_KEY);
	if (msg.message == WM_KEYDOWN)
	{
		if ((msg.vkcode == VK_UP && snake.dir != VK_DOWN) ||
			(msg.vkcode == VK_DOWN && snake.dir != VK_UP) ||
			(msg.vkcode == VK_LEFT && snake.dir != VK_RIGHT) ||
			(msg.vkcode == VK_RIGHT && snake.dir != VK_LEFT))
		{
			switch (msg.vkcode)
			{
			case VK_UP:
				snake.dir = VK_UP;
				break;
			case VK_DOWN:
				snake.dir = VK_DOWN;
				break;
			case VK_RIGHT:
				snake.dir = VK_RIGHT;
				break;
			case VK_LEFT:
				snake.dir = VK_LEFT;
				break;
			}
		}
	}
}
void MoveSnake()
{
	for (int i = snake.num - 1; i > 0; i--)
	{
		snake.coor[i].x = snake.coor[i - 1].x;
		snake.coor[i].y = snake.coor[i - 1].y;
	}
		switch (snake.dir)
		{
		case VK_UP:
			snake.coor[0].y -= snake.size;
			break;
		case VK_DOWN:
			snake.coor[0].y += snake.size;
			break;
		case VK_RIGHT:
			snake.coor[0].x += snake.size;
			break;
		case VK_LEFT:
			snake.coor[0].x -= snake.size;
			break;
		}
}
void InitFood()
{
	foodpos.x=rand() % 64 * 20;
	foodpos.y=rand() % 36 * 20;
	foodpos.flag = 1;
}
void DrawFood()
{
	if (foodpos.flag != 0)
	{
		setfillcolor(BLUE);
		fillrectangle(foodpos.x, foodpos.y, foodpos.x + snake.size, foodpos.y + snake.size);
	}
}
void EatFood()
{
	if (snake.coor[0].x == foodpos.x && snake.coor[0].y == foodpos.y)
	{
		snake.num++;
		snake.score++;
		foodpos.flag = 0;
	}
}
void SnakeDie()
{
	if (snake.coor[0].x > 1280 || snake.coor[0].y > 720 || snake.coor[0].x < 0 || snake.coor[0].y < 0)
	{
		running = false;
		MessageBox(GetHWnd(), "游戏结束", "撞墙", MB_OK);
	}
	for (int i = 1; i < snake.num; i++)
	{
		if (snake.coor[0].x == snake.coor[i].x && snake.coor[0].y == snake.coor[i].y)
		{
			MessageBox(GetHWnd(), "游戏结束", "撞自己", MB_OK);
			running = false;
		}
	}
}
void Score()
{
	char arr[100];
	sprintf(arr, "Score: %d", snake.score);
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
	settextstyle(20,20, "微软雅黑");
	outtextxy(10, 0, arr);
}
void Control()
{
	InitSnake();
	//int starttime = GetTickCount();
	BeginBatchDraw();
	while (running != false)
	{
		SnakeDirection();

		MoveSnake();

		cleardevice();

		DrawSnake();

		DrawFood();

		if (foodpos.flag == 0)
		{
			InitFood();
		}
		Score();
		EatFood();
		FlushBatchDraw();

		//int endtime = GetTickCount();
		//int spendtime = endtime - starttime;
		//if (spendtime < 1000 / 60)
		/*{
			Sleep(1000 / 60 - spendtime);
		}*/
		Sleep(snake.speed);
		SnakeDie();
	}
	EndBatchDraw();
}
int main()
{
	srand(time(NULL));
	initgraph(1280, 720);
	setbkcolor(WHITE);
	cleardevice();
	Control();

	getchar();
	return 0;
}