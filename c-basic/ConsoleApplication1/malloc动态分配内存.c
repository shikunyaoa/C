#include <stdio.h>
//程序中用了malloc函数,应包含stdlib.h
#include <stdlib.h>

//声明函数check
void check(int *);
int main(void) {
    
    int * p1, i;
    //开辟动态内存区，将地址转换成int *型
    p1 = (int *)malloc(5 * sizeof(int));
    for (i = 0; i < 5; i++) {
        scanf("%d", p1 + i);
    }
    check(p1);
    //释放动态分配区
    free(p1);
    return 0;
}

//定义check函数
void check(int * p) {
    int i;
    printf("They are fail:");
    for (i = 0; i < 5; i++) {
        if (p[i] < 60) {
            printf("%d", p[i]);
        }
        printf("\n");
    }

}

/*
在Visual Stadio 2015中输出结果为：
***********************************
67 98 29 29 39
They are fail:

29
29
39
***********************************
结论：指针可以作为参数传递
*/