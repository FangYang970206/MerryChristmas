
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
	PlaySound((".\\res\\����춣��.wav"), NULL, SND_FILENAME | SND_ASYNC);

}
int main()
{	
	string name;
	cout << "�������������(���갴�س�)��";
	cin >> name;
	if (name != "���") {
		cout << "�������ֻ��ͨ����������ֽ��н����������˵�����û��"<< endl;
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
	settextstyle(30, 0, "����");
	Sleep(1000);
	outtextxy(200, 540, "       �����ƴ��ѩ����������ѩ����    "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       �챼�۹���Ұ�����ǻ�Ц�ָ質    "); Sleep(5000);
	setcolor(RGB(255, 34, 0));											  
	outtextxy(200, 540, "       ��������춣�������˾���໶��  "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       ���ǽ���ѩ����֣��ѻ�ѩ�����"); Sleep(5000);
	setcolor(RGB(38, 255, 0));											  
	outtextxy(200, 540, "       ��������������������춣��      "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       ����ѩ����֣���������ѩ����  "); Sleep(5000);
	setcolor(RGB(38, 255, 0));											  
	outtextxy(200, 540, "       ��������������������춣��      "); Sleep(5000);
	setcolor(RGB(8, 194, 150));											  
	outtextxy(200, 540, "       ����ѩ����֣���������ѩ����  "); Sleep(5000);
	setcolor(RGB(255, 0, 89));
	outtextxy(200, 540, "���, ʥ�����֣� �������ģ�ƽƽ������^_^"); Sleep(10000);
	return 0;
}