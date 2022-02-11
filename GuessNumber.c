#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int answer;
int guess;
int turn;

int main(void){
    // Your code here!
    setAnswer();
    // printf("%d\n", answer);
    guessNumber();
}

int setAnswer(void){
    srand(time(0));
    answer = rand()%100;
    // printf("%d\n", answer);
}

int guessNumber(void){
    printf("0～99の中から、答えを設定しました。\n");
    
    for (turn = 1; turn<10 ;turn++){
        printf("答えを予想して入力してください。\n");
        scanf("%d", &guess);
        printf("予想した答えは%dですね。\n", guess);
        if (guess > answer){
            printf("正解は%dより小さいです。\n", guess);
        } else if (guess < answer) {
            printf("正解は%dより大きいです。\n", guess);
        } else {
            printf("あたり！%d回目で正解です！", turn);
            break;
        }
    }
    return 0;
}