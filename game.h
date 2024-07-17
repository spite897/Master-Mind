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

void initialize(int* answer , int* input , int * current_turn);
void input(int* answer , int* input , int * current_turn);
int check(int* answer , int* input , int * current_turn);
void nextTurn(int* answer , int* input , int * current_turn);

void test(int* answer , int* input , int * current_turn);

#endif
