#include <stdio.h>

//�����ṹ������
//��ָ�����ͳ�Ա�������һ�����ĵ�ַ
struct Student {
    int num;
    float score;
    struct Student * next;
};

int main(void) {

    struct Student a, b, c, *head, *p;
    a.num = 10101; a.score = 89.5;
    b.num = 10103; b.score = 90;
    c.num = 10107; c.score = 85;
    //��������ṩͷָ�룬����ָ���һ��Ԫ��
    //�����a����ʼ��ַ����ͷָ��head
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    //ʹpҲָ��a���
    p = head;
    do {
        //ʹ��ָ���������ȡ�ṹ���Ա����
        printf("%ld %5.1f\n", p->num, p->score);
        p = p->next;
    } while (p != NULL);
    return 0;
}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
10101  89.5
10103  90.0
10107  85.0
***********************************
���ۣ�����ʹ�ýṹ�幹��������������
*/