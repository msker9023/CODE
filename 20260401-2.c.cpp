
#include <graphics.h>
#include <conio.h>
void drawshape()
{
	//绘制点
	putpixel(50, 50, RED);
	//绘制线
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID,5);
	line(0, 0,  getwidth(), getheight());
	//绘制矩形
	rectangle(0, 0, 300, 300);
}
int main()
{
	//创建窗口(宽度,高度)
	initgraph(640, 480,EX_SHOWCONSOLE);
	//设置颜色
	setbkcolor(WHITE);
	//填充颜色
	cleardevice();
	//
	drawshape();
	_getch();
	return 0;
}