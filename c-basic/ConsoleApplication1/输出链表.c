#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

struct Student {
    long num;
    float score;
    struct Student * next;
};

int n;

struct Student * creat() {
    
    struct Student * head;
    struct Student * p1, *p2;
    n = 0;
    p1 = p2 = (struct Student *)malloc(LEN);
    scanf("%ld, %f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0) {
        n = n + 1;
        if (n == 1)head = p1;
        else p2->next = p1;
        p2 = p1;
        p1 = (struct Student *)maloc(LEN);
        scanf("%ld,%f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return(head);
}

void print(struct Student  * head) {
    struct Student * p;
    printf("\nNow,These %d records are:\n", n);
    p = head;
    if (head != NULL) {
        do {
            prinf("%ld %5.1f\n", p->num, p->score);
            p = p->next;
        } while (p != NULL);
    }
}

void main(void) {
    struct Student * head;
    head = creat();
    print(head);
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