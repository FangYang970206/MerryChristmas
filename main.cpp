
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include"stdlib.h"
#include"windows.h"
#include"mmsystem.h"
#include"string.h"
#include"stdio.h"
#include <time.h>
#include"math.h"
#include <string>
#pragma  comment(lib,"winmm.lib")

using namespace std;


void playSound()
{
	Sleep(1000);
	PlaySound((".\\res\\铃儿响叮当.wav"), NULL, SND_FILENAME | SND_ASYNC);

}
int main()
{	
	string name;
	cout << "请输入你的名字(输完按回车)：";
	cin >> name;
	if (name != "李春晓") {
		cout << "这个程序只能通过李春晓的名字进行解锁，其他人的名字没用"<< endl;
		Sleep(3000);
		return 0;
	}
	system("Title ");
	initgraph(1000, 590);
	playSound();
	IMAGE img;
	loadimage(NULL, ".\\res\\LCX.jpg");
	loadimage(&img, ".\\res\\tree.jpg");
	putimage(500, 0, &img);
	Sleep(4000);
	setcolor(RGB(255, 34, 0));
	settextstyle(30, 0, "黑体");
	Sleep(1000);
	outtextxy(200, 540, "       啊冲破大风雪，我们坐在雪橇上    "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       快奔驰过田野，我们欢笑又歌唱    "); Sleep(5000);
	setcolor(RGB(255, 34, 0));											  
	outtextxy(200, 540, "       马儿铃声响叮当，令人精神多欢畅  "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       我们今晚滑雪真快乐，把滑雪歌儿唱"); Sleep(5000);
	setcolor(RGB(38, 255, 0));											  
	outtextxy(200, 540, "       叮叮当，叮叮当，铃儿响叮当      "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       今晚滑雪多快乐，我们坐在雪橇上  "); Sleep(5000);
	setcolor(RGB(38, 255, 0));											  
	outtextxy(200, 540, "       叮叮当，叮叮当，铃儿响叮当      "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       今晚滑雪多快乐，我们坐在雪橇上  "); Sleep(5000);
	setcolor(RGB(255, 0, 89));
	outtextxy(200, 540, "李春晓, 圣诞快乐！ 开开心心，平平安安！^_^"); Sleep(10000);
	return 0;
}