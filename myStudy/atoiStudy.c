#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 
 	//atoi() ����Լ��� ���ڿ��� ���ڷ� ��ȯ���ش�.
	//���� �ѱ��̶�� Null�� ��ȯ�ϰ� ���ڴ� �״�� ��ȯ�Ѵ�. 
	//�׸��� char Ÿ������ ������ �����ؼ� �տ� *�� ���̸� ���ڿ��� �߰��Ҽ��ִ�.
	//c�� StringŬ������ ����. 
	 
 	char *myName = "kimeuiyeob";
 	char *thisIsString = "123456789";
 	
//    char *str1 = "12345";
//    char *str2 = "12345.6789";
//    char *str3 = "-12345";
//    char *overflow = "9876543210";
//    char *not_number = "Hello_Atoi";

//    printf("str1[%s] atoi[%d]\n", str1, atoi(str1));
//    printf("str2[%s] atoi[%d]\n", str2, atoi(str2));
//    printf("str3[%s] atoi[%d]\n", str3, atoi(str3));
//    printf("overflow[%s] atoi[%d]\n", overflow, atoi(overflow));
//    printf("not_number[%s] atoi[%d]\n", not_number, atoi(not_number));
    
    printf("%s\n",myName);
    printf("%d\n",atoi(myName));
    
    printf("%s\n",thisIsString);
     printf("%d\n", atoi(thisIsString) - 123456788);
     
    //���� ��� 
//  str1[12345] atoi[12345]
//	str2[12345.6789] atoi[12345]
//	str3[-12345] atoi[-12345]
//	overflow[9876543210] atoi[1286608618]
//	not_number[Hello_Atoi] atoi[0]

    return 0;
}
