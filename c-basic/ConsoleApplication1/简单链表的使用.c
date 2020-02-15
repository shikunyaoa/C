#include <stdio.h>

//声明结构体类型
//用指针类型成员来存放下一个结点的地址
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
    //链表必须提供头指针，并且指向第一个元素
    //将结点a的起始地址赋给头指针head
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    //使p也指向a结点
    p = head;
    do {
        //使用指向运算符获取结构体成员变量
        printf("%ld %5.1f\n", p->num, p->score);
        p = p->next;
    } while (p != NULL);
    return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
10101  89.5
10103  90.0
10107  85.0
***********************************
结论：可以使用结构体构造链表数据类型
*/