#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <amp_graphics.h>

//定义按键码
#define VK_LEFT 0x4b00
#define VK_RIGHT 0x4d00
#define VK_DOWN 0x5000
#define VK_UP 0x4800
#define VK_ESC 0x011b
#define TIMER 0x1c

//定义常量
#define MAX_BOX 19
#define BSIZE 20
#define Sys_x 160
#define Sys_y 25
#define Horizontal_boxs 10
#define Vertical_boxs 15
#define Begin_boxs_x Horizontal_boxs/2
#define FgColor 3
#define BgColor 0
#define LeftWin_x Sys_x+Horizontal_boxs*BSIZE+46
#define false 0
#define true 1

//移动方向
#define MoveLeft 1
#define MoveRight 2
#define MoveDown 3
#define MoveRoll 4

//定义全局变量
int current_box_numb;
int Curbox_x = Sys_x + Begin_boxs_x*BSIZE, Curbox_y = Sys_y;
int flag_newbox = false;
int speed = 0;
int score = 0;
int speed_step = 30;
void interrupt(*oldtimer)(void);

struct BOARD {
	int var;
	int color;
} Table_board[Vertical_boxs][Horizontal_boxs];

//方块结构
struct SHAPE {
	char box[2];
	int color;
	int next;
};


//初始化方块内容
struct SHAPE shapes[MAX_BOX] = {
	{0x88, 0xc0, CYAN, 1},
	{ 0xc8, 0x0, CYAN, 2 },
	{ 0xc4, 0x40, CYAN, 3 },
	{ 0x2c, 0x0, CYAN, 0 },

	{ 0x44, 0xc0, MAGENTA, 5 },
	{ 0x8e, 0x0, MAGENTA,6 },
	{ 0xc8, 0x80, MAGENTA, 7 },
	{ 0xe2, 0x0, MAGENTA, 4 },

	{ 0x8c, 0x40, YEELOW, 9},
	{ 0x6c, 0x0, YEELOW, 8 },

	{ 0x4e, 0x0, WHITE, 13 },
	{ 0x8c, 0x80, WHITE, 14 },
	{ 0xe4, 0x0, WHITE, 15 },
	{ 0x4c, 0x40, WHITE, 12 },

	{ 0x88, 0x88, RED, 17 },
	{ 0xf0, 0x0, RED, 16},

	{ 0xcc, 0x0, BLUE, 18 }
};

//定时计数器变量
unsigned int TimerCounter = 0; 

//新的始终中断处理函数
void interrupt newtimer(void) {
	(*oldtimer)();
	TimerCounter++;
}

//设置新的始终中断处理过程
void SetTimer(void interrupt(*IntProc)(void)) {
	oldtimer = getvect(TIMER);
	disable();
	setvect(TIMER, IntProc);
	enable();
}

void KillTimer() {
	disable();
	setvect(TIMER, oldtimer);
	enable();
}


