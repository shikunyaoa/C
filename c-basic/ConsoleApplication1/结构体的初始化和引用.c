#include <stdio.h>

//�����ṹ������
//�ṹ��Ķ���
// struct �ṹ���� 
//{ ��Ա�б� } �������б�;
struct Student {
    long int num;
    char name[20];
    char sex;
    char addr[20];
}a = {10101, "Li Lin", 'M', "123 Beijing Road"};
int main(void) {
    //ͨ��������+ . ��������ʽṹ��ĳ�Ա����
    printf("No.%ld\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.addr);
    return 0;
}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
No.10101
name:Li Lin
sex:M
address:123 Beijing Road
***********************************
���ۣ��ṹ����Ǹ������ݵ����
*/