#include <stdio.h>
#include <time.h> 

int main () {
	
   struct tm * t;
   time_t base = time(NULL);
   t = localtime(&base);
   int nowYear = t->tm_year + 1900;
   int nowMonth = t->tm_mon + 1;
   int nowDay = t->tm_mday;
   
   char a[20];
   int year, age;
   
   printf("�ֹε�Ϲ�ȣ�� �Է����ּ���.\n");
   scanf("%s",&a);
   
   if(a[6] == '1' || a[6] == '2') {
   	 year = 1900 + ((a[0] - 48)*10 +(a[1]-48));
   }else {
   	 year = 2000 + ((a[0] - 48)*10 +(a[1]-48));
   }
   
   int myMonth = (a[2]-48) + (a[3]-48);
   int myDay =  (a[4]-48) + (a[5]-48);
   
   if(myMonth <= nowMonth && myDay <= nowDay) {
   	 age = nowYear - year;
   	 printf("������ : %d\n",age);
   }else {
   	 age = nowYear - year + 1;
   	 printf("������ : %d\n",age);
   }
   
   if(a[6] == '1' || a[6] == '3') {
   	 printf("���� : ����\n");
   }else {
   	 printf("���� : ����\n");
   } 
   
}
