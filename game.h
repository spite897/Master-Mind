#ifndef _GAME_H
#define _GAME_H

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NAIL_NUM 4
#define MAX_TURN 8
#define SAME_ABLE 0
#define NAIL_MAX 6
#define NAIL_MIN 1		//¿ªÇø¼ä

void Initialize(int* answer , int* input , int * current_turn);
void Input(int* answer , int* input , int * current_turn);
int Check(int* answer , int* input , int * current_turn);
void Next_turn(int* answer , int* input , int * current_turn);

void Test(int* answer , int* input , int * current_turn);

#endif