#pragma once//预防头文件重复引用
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void InitBoard(char board[][COL], int row, int col);
void ShowBoard(char board[][COL], int row, int col);
void PlayerMove(char board[][COL], int row, int col);
void ComputerMove(char board[][COL], int row, int col);
char IsWin(char board[][COL], int row, int col);