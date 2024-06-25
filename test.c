#include"game.h"

void describe() {
	printf("There are four different nails which you are going to guess their colors\n");
	printf("You need to send guesses and get response including 'real_true' which means one is right both in position and color\n");
	printf("and 'half_true' which means one is only right in color\n");
	printf("As a limit you have 8 chances to send your guess\n");
	printf("Sending example:1 1 2 2\n\n");
}

int main() {
	describe();
	int answer[NAIL_NUM] = { 0 };
	int input[NAIL_NUM] = { 0 };
	int current_turn = 1;
	Test(answer, input,&current_turn);
	return 0;
}