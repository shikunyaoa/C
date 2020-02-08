#include <stdio.h>

//声明结构体类型
//结构体的定义
// struct 结构体名 
//{ 成员列表 } 变量名列表;
struct Student {
    long int num;
    char name[20];
    char sex;
    char addr[20];
}a = {10101, "Li Lin", 'M', "123 Beijing Road"};
int main(void) {
    //通过变量名+ . 运算符访问结构体的成员变量
    printf("No.%ld\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.addr);
    return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
No.10101
name:Li Lin
sex:M
address:123 Beijing Road
***********************************
结论：结构体就是各种数据的组合
*/