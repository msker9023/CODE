#include<stdio.h>
#include<easyx.h>
int main()
{
	initgraph(640,480);
	setbkcolor(WHITE);
	cleardevice();
	setbkmode(TRANSPARENT);
	int number = 0;
	char ch[100];
	while (1)
	{
		sprintf(ch, "number:%d", number++);
		BeginBatchDraw();
		cleardevice();
		settextcolor(BLACK);
		outtextxy(100, 100, ch);
		EndBatchDraw();
	}
	getchar();

}