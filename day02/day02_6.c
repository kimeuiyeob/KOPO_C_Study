#include <stdio.h>


//윤달 확인 함수 
int isYoonDal(int a) {
    if ((a % 4 == 0) && !(a % 100 == 0) || (a % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
	
    int year; // 사용자 입력 <== 년도 받아오기 
    int month; // 사용자 입력 <== 월 받아오기 
    int weekDay; // 저장용 변수
    int sum = 0; // 현재의 모든 일 계산 변수
    
    int basicyear[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //달별로 끝나는 날짜 저장 
    
    printf("년도 입력 : \n");
    scanf("%d", &year); 
    
    printf("월 입력 : \n");
    scanf("%d", &month);
 
    //윤달 확인
    if (isYoonDal(year)) { //리턴값이 1일대는 윤달 
        basicyear[1]++; //2월 29일로 변경 
    } 
 
    //1900년도부터 시작
    int i;
    for (i = 1900 ; i < year; i++) {
        if (isYoonDal(i)) {
        	sum += 366; //윤달일시 하루더 김 
		} else {
			sum += 365;
		} 
    }
    //월요일부터 시작이여서 하루추가 
    sum += 1;
 
    //입력한 달까지 며칠인지 
    for (i = 0 ; i < month - 1 ; i++) {
        sum += basicyear[i];
    }
 
    //1월1일 무슨 요일인지 계산
    weekDay = sum % 7;
 
    printf("==================== %d년 %d월====================\n",year,month);
    printf("일\t월\t화\t수\t목\t금\t토\n");
 
    //시작 요일에 맞춰 정렬
    int j;
    for (j = 0 ; j < weekDay ; j++) {
        printf("\t");
    }
 
    for (i = 1 ; i <= basicyear[month - 1] ; i++) {
        printf("%d\t", i);
        if (weekDay == 6) {
            weekDay = -1;
            printf("\n");
        }
        weekDay++;
    }
    printf("\n");
}


