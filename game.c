#include"game.h"

void Initialize(int* answer , int* input , int * current_turn) {
    int i = 0 , j = 0 , num[NAIL_NUM] = {0};
    srand((unsigned int)time(NULL));
    
    for (i = 0; i < NAIL_NUM;) {
        num[i] = rand() % NAIL_MAX + NAIL_MIN;//取一个待写入的随机值

        for (j = 0; j < i; j++)//检验是否有重复
            if (num[i] == num[j])
                break;          //触发就不会写入
        
        if (!(j < i)) {     //if没有触发break
            *(answer + i) = num[i];
            i++;
        }
    }
}
void Input(int* answer , int* input , int * current_turn) {
    printf("turn%d send answer: ", *current_turn);
    scanf("%d %d %d %d" , input , input+1 , input+2 , input+3);//待修改
}
int Check(int* answer , int* input , int * current_turn) {
    int real_true = 0, half_true = 0 , i =0 ,j=0;
    for (i = 0; i < NAIL_NUM; i++) {        //j->input  i->answer
        for (j = 0; j < NAIL_NUM; j++) {    //输入是否在答案中
            if (*(input + j) == *(answer + i))
                break;                      //在答案中
        }

        if (j < NAIL_NUM) {              
            if (*(input + i) == *(answer + i))
                real_true++;
            else
                half_true++;
        }

    }

    printf("\nreal_true : %d , half_true : %d\n\n",real_true,half_true);

    if (real_true == NAIL_NUM)
        return 1;//猜出答案
    else if (*current_turn == MAX_TURN)
        return 2;//超时
    else 
        return 0;//继续游戏

}
void Next_turn(int* answer , int* input , int * current_turn) {
    (*current_turn)++;
}
void Test(int* answer , int* input , int * current_turn) {
    int end = 0;
    Initialize(answer, input, current_turn);
	while (!end){
		Input(answer, input, current_turn);
		end = Check(answer, input, current_turn);
		Next_turn(answer, input, current_turn);
	}
    switch (end)
    {
    case(1):
        printf("Congratulation! You win !\n");
        break;
    case(2):
        printf("What a pity! You lose!\n");
        break;
    default:
        break;
    }
    system("pause");
}
/*
* for i,j in enumerate(self.answer):
            if j in self.input:
                if self.input[i] == self.answer[i]:
                    real_true += 1
                else: half_true += 1

        if real_true == self.nail_num:
            print("true answer!!!")
            self.set_end("player%d is winner" % self.current_player)
        else :
            print("%d real true , %d half true" % (real_true,half_true))
*/