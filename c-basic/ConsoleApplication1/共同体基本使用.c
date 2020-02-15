#include <stdio.h>

struct {
    int num;
    char name[10];
    char sex;
    char job;
    //定义共用体
    //union 共用体名{
    //  成员列表
    //}变量列表;
    union {
        int clas;
        char position[10];
    }category;
}person[2];

int main(void) {

    int i;
    for (i = 0; i < 2; i++) {
        printf("please enter the data of person:\n");
        scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);
        if (person[i].job == 's') {
            scanf("%d", &person[i].category.clas);
        }
        else if (person[i].job == 't') {
            scanf("%d", person[i].category.position);
        }
        else {
            printf("Input error!");
        }
    }
    printf("\n");
    printf("No.  name       sex job class/position \n");
    for (i = 0; i < 2; i++) {
        if (person[i].job == 's') {
            printf("%-6d%-10s%-4c%-4c%-10d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.clas);
        }
        else {
            printf("%-6d%-10s%-4c%-4c%-10s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
        }
    }
    return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
please enter the data of person:
101 Li f s 501
please enter the data of person:
102 Wang m t prof

No.  name       sex job class/position
101   Li        f   s   501
102   Wang      m   t
***********************************
结论：共用体使用同一块内存存储不同类型的数据
*/