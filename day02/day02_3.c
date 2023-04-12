#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, com;
    int user_win = 0, com_win = 0, draw = 0;

    srand(time(NULL));

    printf("가위바위보 게임을 시작합니다.\n");
    printf("1: 가위, 2: 바위, 3: 보\n");
    
    while (1) {
        printf("무엇을 낼까요? ");
        scanf("%d", &user);
        
        if (user < 1 || user > 3) {
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");
            continue;
        }
        
        com = rand() % 3 + 1;

        if (user == com) {
            printf("비겼습니다.\n");
            draw++;
        } else if ((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)) {
            printf("이겼습니다!\n");
            user_win++;
        } else {
            printf("졌습니다.\n");
            com_win++;
        }
        
        printf("유저 %d승 %d무 %d패\n", user_win, draw, com_win);
        printf("컴퓨터가 낸 것은 %d입니다.\n", com);
        printf("\n");
    }

    return 0;
}
