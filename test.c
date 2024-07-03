#include"game.h"

int main() {
	int answer[NAIL_NUM] = { 0 };
	int input[NAIL_NUM] = { 0 };
	int current_turn = 1;
	Test(answer, input,&current_turn);
	return 0;
}
