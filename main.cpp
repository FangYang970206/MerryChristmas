
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
	system("Title ");
	initgraph(1000, 590);
	IMAGE img1;
	loadimage(&img1, ".\\res\\boy.jpg");
	putimage(0, 0, &img1);
	IMAGE img2;
	loadimage(&img2, ".\\res\\girl.jpg");
	putimage(500, 0, &img2); Sleep(4000);
	IMAGE img3;
	loadimage(&img3, ".\\res\\black.jpg");
	putimage(0, 0, &img3); Sleep(3000);
	IMAGE img4;
	loadimage(&img4, ".\\res\\full_black.jpg");
	putimage(0, 0, &img4); Sleep(1500);
	settextstyle(80, 0, "黑体");
	setcolor(RGB(255, 255, 255));
	outtextxy(360, 240, "   3   "); Sleep(1000);
	outtextxy(360, 240, "   2   "); Sleep(1000);
	outtextxy(360, 240, "   1   "); Sleep(1000);
	playSound();
	IMAGE img5;
	loadimage(NULL, ".\\res\\LCX.jpg");
	loadimage(&img5, ".\\res\\tree.jpg");
	putimage(500, 0, &img5);
	Sleep(2000);
	setcolor(RGB(255, 34, 0));
	settextstyle(30, 0, "黑体");
	Sleep(1000);
	outtextxy(200, 540, "       啊冲破大风雪，我们坐在雪橇上    "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       快奔驰过田野，我们欢笑又歌唱    "); Sleep(5000);
	IMAGE img6;
	loadimage(&img6, ".\\res\\icecream.jpg");
	putimage(500, 0, &img6);
	setcolor(RGB(255, 34, 0));											  
	outtextxy(200, 540, "       马儿铃声响叮当，令人精神多欢畅  "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       我们今晚滑雪真快乐，把滑雪歌儿唱"); Sleep(5000);
	IMAGE img7;
	loadimage(&img7, ".\\res\\flower.jpg");
	putimage(500, 0, &img7);
	setcolor(RGB(38, 255, 0));											  
	outtextxy(200, 540, "       叮叮当，叮叮当，铃儿响叮当      "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       今晚滑雪多快乐，我们坐在雪橇上  "); Sleep(5000);
	IMAGE img8;
	loadimage(&img8, ".\\res\\apple.jpg");
	putimage(500, 0, &img8);
	setcolor(RGB(38, 255, 0));											  
	outtextxy(200, 540, "       叮叮当，叮叮当，铃儿响叮当      "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       今晚滑雪多快乐，我们坐在雪橇上  "); Sleep(5000);
	IMAGE img9;
	loadimage(&img9, ".\\res\\snowman.jpg");
	putimage(500, 0, &img9);
	setcolor(RGB(255, 0, 89));
	outtextxy(200, 540, "李春晓, 圣诞快乐！ 开开心心，平平安安！^_^"); Sleep(8000);
	IMAGE img10;
	loadimage(&img10, ".\\res\\pig.jpg");
	putimage(0, 0, &img10);
	Sleep(8000);
	return 0;
}