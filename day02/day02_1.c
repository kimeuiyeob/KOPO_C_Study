#include <stdio.h> //��� 
#include <string.h> //���ڿ� ���� strcpy(), strcat(), strcmp(), strchr(), strlen() ���� �ִ�. 
#include <conio.h> //conio.h �� �ܼ� ����� �Լ��� �����ϴ� ��� => getch()
//���� �Է��� ������ ����ߴٰ� ���� ������ ���ۿ� �����ߴٰ� ���ۿ��� ������ �����Ѵ�.
#include <stdlib.h> // ���� �Ҵ� ���� �Լ�, ���� ���� �Լ�, ������ ���� �Լ�, �˻� �� ���� �Լ� �����ִ�. 
#include <time.h> //�ð� �� ���� �Լ��� time(), localtime(), ctime(), asctime() �Լ����� �ִ�. 

int main(void) {
	
	//���� ��¥  �޾ƿ��� 
	struct tm * t;
    time_t base = time(NULL);
    t = localtime(&base);
    int nowYear = t->tm_year + 1900;
    int nowMonth = t->tm_mon + 1;
    int nowDay = t->tm_mday;
	 
	//�ֹι�ȣ �� �迭 
 	char me[13];
	int i;
	int year, age;
	
	printf("�ֹι�ȣ�� �Է����ּ��� => ");
	
	for (i = 0; i < 6; i++) {
		me[i] = getche();   
	}
    printf("-");

 	for (; i < 13; i++) {
  		me[i] = getch();        
  		printf("*");
 	}
	
	me[13] = getchar();  
   
   if(me[6] == '1' || me[6] == '2') {
   		year = 1900 + ((me[0] - 48)*10 +(me[1]-48));
   }else {
   		year = 2000 + ((me[0] - 48)*10 +(me[1]-48));
   }
   
   int myMonth = (me[2]-48) + (me[3]-48);
   int myDay =  (me[4]-48) + (me[5]-48);
   
   if(myMonth <= nowMonth && myDay <= nowDay) {
   		age = nowYear - year;
   		printf("������ : %d\n",age);
   }else {
   		age = nowYear - year + 1;
   		printf("������ : %d\n",age);
   }
   
   if(me[6] == '1' || me[6] == '3') {
   		printf("���� : ����\n");
   }else {
   		printf("���� : ����\n");
   } 

}
	 

