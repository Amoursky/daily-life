#ifndef __GAME_H__
#define __GAME_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 3  //自定义行数；
#define COL 3  //自定义列数；

void meau();//菜单函数；
void test();//测试函数；
void game();//游戏模块；
void init_board();//初始化棋盘函数；
void output_board();//打印棋盘；
void player();//玩家走；
void computer();//电脑走；
int judge();//判断输赢；


#endif //__GAME_H__