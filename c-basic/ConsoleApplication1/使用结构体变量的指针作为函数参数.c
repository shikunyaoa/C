#include <stdio.h>
#define N 3

//定义结构体
struct Student {
    int num;
    char name[20];
    float score[3];
    float aver;
};

//函数声明
void input(struct Student stu[]);
struct Student max(struct Student stu[]);
void print(struct Student stu);

int main(void) {

    struct Student stu[N], *p = stu;
    input(p);
    print(max(p));
    return 0;
}

//函数定义
void input(struct Student stu[]) {
    int i;
    printf("请输入各学生的信息：学号，姓名，三门课成绩：\n");
    for (i = 0; i < N; i++) {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0],
            &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
    }
}

struct Student max(struct Student stu[]) {
    int i, m = 0;
    for (i = 0; i < N; i++) {
        if (stu[i].aver > stu[m].aver) m = i;
    }
    return stu[m];
}

void print(struct Student stud) {

    printf("\n成绩最高的学生是:\n");
    printf("学号: %d\n 姓名:%s\n 三门课成绩:%5.1f, %5.1f, %5.1f\n平均成绩:%6.2f\n",
        stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
请输入各学生的信息：学号，姓名，三门课成绩：
10101 Li 78 89 98
10103 Wang 98.5 87 69
10106 Sun 88 76.5 89

成绩最高的学生是:
学号: 10101
姓名:Li
三门课成绩: 78.0,  89.0,  98.0
平均成绩: 88.33
***********************************
结论：指针可以作为参数传递
*/