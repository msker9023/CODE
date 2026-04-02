#include<stdio.h>
#include <graphics.h>
#include <conio.h>
#include<easyx.h>

void drawshape()
{
	////绘制点
	//putpixel(50, 50, RED);
	////绘制线
	//setlinecolor(BLUE);
	//setlinestyle(PS_SOLID,5);
	//line(0, 0,  getwidth(), getheight());
	////绘制矩形
	//setlinecolor(RED);
	//rectangle(100, 0, 200, 100);
	//setlinecolor(YELLOW);
	//rectangle(200, 0, 200 + 100, 0 + 100);
	////填充矩形
	////填充颜色
	//setfillcolor(GREEN);
	//fillrectangle(100, 100, 200, 200);
	//solidrectangle(100, 200, 200, 300);
	////圆角矩形
	////roundrect(200+10,0+10,300+10,100+10,20,20);
	////fillroundrect();
	//// solidroundrect();
	////绘制圆
	////circle(350, 300, 50);
	////fillcircle(400, 350, 50);
	////solidcircle(400, 400, 50);
	////椭圆
	////ellipse(500, 280, 600, 480);
	////折线
	////POINT points[] = { {0,0},{50,40},{300,200},{600,450} };
	////polyline(points, 4);

}
void drawText()
{
	//// outtextxy 需要第三个参数为 LPCTSTR 类型（即 const TCHAR*）
	//// 需要使用 _T 宏将字符串转换为 TCHAR 类型
	//settextcolor(RED);
	//setbkmode(TRANSPARENT);
	//settextstyle(20,0,"微软雅黑");
	//outtextxy(500, 300, ("HELLO WORLD"));
	//char ch[100];
	//int score = 60;
	//sprintf(ch, "score=%d", score);
	//outtextxy(getwidth()-100, 0, ch);

}
void Centertext()
{
	int lx = 100;
	int ly = 100;
	int width = 200;
	int height = 100;
	//计算居中
	settextstyle(30, 0, "微软雅黑");
	char str[] = "SCOUT";
	int wspace = (width - textwidth(str)) / 2;
	int hspace = (height - textheight(str)) / 2;
	setlinecolor(BLACK);
	setfillcolor(RED);
	fillrectangle(lx, ly, lx + width, ly + height);
	settextcolor(BLUE);
	outtextxy(lx+wspace, ly+hspace, str);
	
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
	//drawshape();
	//drawText();
	//Centertext();
	//定义消息结构体变量
	ExMessage msg = { 0 };
	//获取信息
	while (1)
	{
		if (peekmessage(&msg, EX_MOUSE))
		{
			if (msg.message == WM_LBUTTONDOWN)
			{
				printf("鼠标左键按下\n");
			}
		}
	}
	
	_getch();
	return 0;
}