#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, com;
    int user_win = 0, com_win = 0, draw = 0;

    srand(time(NULL));

    printf("���������� ������ �����մϴ�.\n");
    printf("1: ����, 2: ����, 3: ��\n");
    
    while (1) {
        printf("������ �����? ");
        scanf("%d", &user);
        
        if (user < 1 || user > 3) {
            printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");
            continue;
        }
        
        com = rand() % 3 + 1;

        if (user == com) {
            printf("�����ϴ�.\n");
            draw++;
        } else if ((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)) {
            printf("�̰���ϴ�!\n");
            user_win++;
        } else {
            printf("�����ϴ�.\n");
            com_win++;
        }
        
        printf("���� %d�� %d�� %d��\n", user_win, draw, com_win);
        printf("��ǻ�Ͱ� �� ���� %d�Դϴ�.\n", com);
        printf("\n");
    }

    return 0;
}
