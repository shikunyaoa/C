#include <stdio.h>
//声明fun函数
void fun(int x, int y, int(*p)(int, int));
//max函数声明
int max(int, int);
//min函数声明
int min(int, int);
//add函数声明
int add(int, int);

int main(void) {

    int a = 34, b = -21, n;
    printf("please choose 1,2 or 3:");
    scanf("%d", &n);
    if (n == 1) {
        fun(a, b, max);
    }
    else if (n == 2) {
        fun(a, b, min);
    }
    else if (n == 3) {
        fun(a, b, add);
    }
    return 0;
}

//定义fun函数
void fun(int x, int y, int(*p)(int, int)) {
    int result;
    result = (*p)(x, y);
    printf("%d\n", result);
    
}

//定义max函数
int max(int x, int y) {
    int z;
    if (x > y) {
        z = x;
    }
    else {
        z = y;
    }
    printf("max=");
    return(z);
}

//定义min函数
int min(int x, int y) {
    int z;
    if (x < y) {
        z = x;
    }
    else {
        z = y;
    }
    printf("min=");
    return(z);
}

//定义add函数
int add(int x, int y) {
    int z;
    z = x + y;
    printf("sum=");
    return(z);
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
please choose 1,2 or 3:1
max=34

please choose 1,2 or 3:2
min=-21

please choose 1,2 or 3:3
sum=13
***********************************
结论：可以使用函数指针作为函数参数
*/