#include <stdio.h>

//定义结构体数组并初始化
struct Student {
    int num;
    char name[20];
    char sex;
    int age;
};

struct Student stu[3] = {
    {10101, "Li Lin", 'M', 18},
    {10102, "Zhang Fang", 'M', 19},
    {10104, "Wang Min", 'F', 20}
};
int main(void) {

    struct Student * p;
    printf("No.       Name            sex    age\n");
    //为了使用方便和直观，C语言允许吧(* p).num用p->num来代替
    //->称为指向运算符
    for (p = stu; p < stu + 3; p++) {
        printf("%5d %-20s %2c %4d\n", p->num, p->name, p->sex, p->age);
    }
    return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
No.       Name            sex      age
10101 Li Lin                M   18
10102 Zhang Fang            M   19
10104 Wang Min              F   20
***********************************
结论：可以使用函数指针作为函数参数
*/