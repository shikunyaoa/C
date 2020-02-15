#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

struct Student {
    long num;
    float score;
    struct Student * next;
};

//创建全局变量n
int n;

//定义函数,次哈数返回一个指向链表头的指针
struct Student * creat(void) {
    
    struct Student * head;
    struct Student * p1, *p2;
    n = 0;
    //使用malloc动态分配内存空间
    p1 = p2 = (struct Student *)malloc(LEN);
    scanf("%ld, %f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0) {
        n = n + 1;
        if (n == 1)head = p1;
        else p2->next = p1;
        p2 = p1;
        p1 = (struct Student *)malloc(LEN);
        scanf("%ld, %f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return (head);
}

int main(void) {
    struct Student * pt;
    pt = creat();
    printf("\nnum:%ld\nscore:%5.1f\n", pt->num, pt->score);
    return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
1001,67.5
1004,87
1005,99.5
0,0

num:1001
score: 67.5
***********************************
结论：基于malloc创建动态链表
*/