#include <stdio.h>
#include <string.h>

//定义结构体
struct Student {
    long num;
    char name[20];
    char sex;
    float score;
};
int main(void) {

    //定义struct Sudent类型的变量stu
    struct Student stu;
    //定义指向struct Student类型数据的指针
    struct Student * p;
    //p指向stu
    p = &stu;
    //对结构体变量的成员赋值
    stu.num = 10101;
    //用字符串赋值函数给stu.name赋值
    strcpy(stu.name, "Li Lin");
    stu.sex = 'M';
    stu.score = 89.5;
    printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
        stu.num, stu.name, stu.sex, stu.score);
    printf("\nNo.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
        (*p).num, (*p).name, (*p).sex, (*p).score);

    //为了使用方便和直观，C语言允许吧(* p).num用p->num来代替
    //->称为指向运算符
    printf("\nNo.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
        p->num, p->name, p->sex, p->score);
   
    return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
No.:10101
name:Li Lin
sex:M
score: 89.5

No.:10101
name:Li Lin
sex:M
score: 89.5

No.:10101
name:Li Lin
sex:M
score: 89.5
***********************************
结论:可以使用结构体指针访问结构体的成员变量
*/